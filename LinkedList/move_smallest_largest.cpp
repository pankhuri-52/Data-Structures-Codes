#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
Node* move_smallest(Node* head){
	Node* temp=head;
	int min=temp->data;
	Node* prev=NULL;
	Node* node=NULL;
	Node* node1=NULL;
	while(temp!=NULL){
		if(temp->data<min){
			min=temp->data;
			node=prev;
			node1=temp;
		}
		prev=temp;
		temp=temp->next;
	}
	temp=head;
	Node* new_node=new Node;
	new_node->data=min;
	new_node->next=temp;
	node->next=node1->next;
	temp=new_node;
        return temp;
}
Node* move_largest(Node* head){
	Node* temp=head;
	Node* node=NULL;
	Node* prev=NULL;
	Node* node1=NULL;
	int max=temp->data;
	while(temp!=NULL){
		if(temp->data>max){
			max=temp->data;
			node=temp;
			node1=prev;
		}
		prev=temp;
		temp=temp->next;
	}
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	Node* new_node=new Node;
	new_node->data=max;
	new_node->next=NULL;
	node1->next=node->next;
	temp->next=new_node;
	return head;
}
void print_list(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
int main(int argc,const char *argv[]){
	int n=atoi(argv[1]);
	Node* node[n];
	for(int i=0;i<n;i++){
		node[i]=NULL;
		node[i]=new Node;
	}
	int j=0;
	node[j]->data=atoi(argv[2]);
	node[j]->next=node[j+1];
	j++;
	for(int i=3;i<argc;i++){
		node[j]->data=atoi(argv[i]);
		node[j]->next=node[j+1];
		j++;
	}
	node[n-1]->data=atoi(argv[argc-1]);
	node[n-1]->next=NULL;
	Node* head=node[0];
	Node* head1=move_smallest(head);
	cout<<"AFter moving smallest node in the beginning"<<endl;
	print_list(head1);
        Node* head2=move_largest(head1);
	cout<<"AFter moving largest node at the end"<<endl;
	print_list(head2);
	return 0;
}
