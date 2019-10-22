#include <iostream>
#include <string.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
bool detectloop(struct Node* head){
	Node* slow_ptr=head;
	Node* fast_ptr=head;
	while(slow_ptr && fast_ptr && fast_ptr->next){
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
		if(slow_ptr==fast_ptr)
			return true;
	}
	return false;
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
	node[0]->next->next->next->next=node[0];
	if(detectloop(node[0]))
		cout<<"Loop detected"<<endl;
	else
		cout<<"Loop not present"<<endl;
	return 0;
}
