#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
Node* insert_at_beginning(Node* head,int new_data){
	Node* new_node=new Node;
	new_node->data=new_data;
	new_node->next=head;
	head=new_node;
	return head;
}
void print_list(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main(int argc,const char *argv[]){
	int n=atoi(argv[1]);
	int beg=atoi(argv[2]);
	Node* node[n];
	for(int i=0;i<n;i++){
		node[i]=NULL;
		node[i]=new Node;
	}
	int j=0;
	node[j]->data=atoi(argv[3]);
	node[j]->next=node[j+1];
	j++;
	for(int i=4;i<argc;i++){
		node[j]->data=atoi(argv[i]);
		node[j]->next=node[j+1];
		j++;
	}
	node[n-1]->data=atoi(argv[argc-1]);
	node[n-1]->next=NULL;
	Node* head=node[0];
	Node* head1=insert_at_beginning(head,beg);
	print_list(head1);
	return 0;
}
