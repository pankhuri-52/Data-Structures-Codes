#include <iostream>
#include <string.h>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
};
void print_linkedlist(Node* head){
	Node* temp=head;
	if(temp==NULL)
		return;
	else{
		while(temp!=NULL){
			cout<<temp->data;
			temp=temp->next;
		}
	}
}
Node* copy_list(Node* head){
	Node* temp=head;
	Node* head1=new Node;
	head1->data=temp->data;
	head1->next=NULL;
	Node* temp1=head1;
	temp=temp->next;
	while(temp!=NULL){
		Node* new_node=new Node;
		new_node->data=temp->data;
		new_node->next=NULL;
		temp1->next=new_node;
		temp1=new_node;
		temp=temp->next;
	}
	return head1;
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
	Node* head=node[0];
	Node* head1=copy_list(head);
        print_linkedlist(head1);
	return 0;
}
