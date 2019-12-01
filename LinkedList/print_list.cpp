#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
void print_forward(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
Node* print_backward(Node* head){
	Node* current=head;
	Node* prev=NULL;
	Node* Next=NULL;
	while(current!=NULL){
		Next=current->next;
		current->next=prev;
		prev=current;
		current=Next;
	}
	head=prev;
	cout<<"AFter printing in the reverse order"<<endl;
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
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
	Node* root=node[0];
	print_forward(root);
	print_backward(root);
	return 0;
}
