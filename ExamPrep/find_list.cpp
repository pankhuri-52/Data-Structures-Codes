#include <iostream>
#include <string.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
void find_element(struct Node* head,int element){
	Node* temp=head;
	if(temp==NULL)
		return;
	else{
		int flag=0;
		while(temp!=NULL){
			if(temp->data==element)
			   flag=1;
			temp=temp->next;
		}
		if(flag==1)
			cout<<"Element is present"<<endl;
		else
			cout<<"Element is not present"<<endl;
	}
}
int main(int argc,const char *argv[]){
	int n=atoi(argv[1]);
	Node* node[n];
	for(int i=0;i<n;i++){
		node[i]=NULL;
		node[i]=new Node;
	}
	int j=0;
	for(int i=2;i<argc;i++){
		node[j]->data=atoi(argv[i]);
		node[j]->next=node[j+1];
		j++;
	}
	node[n-1]->data=atoi(argv[argc-1]);
	node[n-1]->next=NULL;
	find_element(node[0],0);
	return 0;
}
