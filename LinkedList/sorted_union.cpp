#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
void union_sorted(Node* head1,Node* head2){
	int flag=0;
	int arr[99];
	int k=0;
	while(head1!=NULL){
           arr[k++]=head1->data;
	   head1=head1->next;
	}
}
int main(int argc,const char *argv[]){
	int n1=atoi(argv[1]);
	int n2=atoi(argv[2]);
	Node* node[n1];
	for(int i=0;i<n1;i++){
		node[i]=NULL;
		node[i]=new Node;
	}
	int j=0;
	for(int i=3;i<argc-n2;i++){
		node[j]->data=atoi(argv[i]);
		node[j]->next=node[j+1];
		j++;
	}
	node[n1-1]->data=atoi(argv[argc-n2-1]);
	node[n1-1]->next=NULL;
	Node* head=node[0];
	
	Node* node1[n2];
	for(int i=0;i<n2;i++){
		node1[i]=NULL;
		node1[i]=new Node;
	}
	int k=0;
	for(int i=n1+3;i<argc;i++){
		node1[k]->data=atoi(argv[i]);
		node1[k]->next=node1[k+1];
		k++;
	}
	node1[n2-1]->data=atoi(argv[argc-1]);
	node1[n2-1]->next=NULL;
	Node* head1=node1[0];
	
	union_sorted(head,head1);
	return 0;
}

