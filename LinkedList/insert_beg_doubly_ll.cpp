#include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next[2];
};
struct Node* insert_at_beg(Node **head,int new_data){
	Node* new_node=new Node;
	new_node->data=new_data;
	new_node->next[0]=*head;
	new_node->next[1]=NULL;
	if((*head)!=NULL)
		(*head)->next[1]=new_node;
	(*head)=new_node;
	return *head;
}
void print_ll(struct Node* head){
	while(head->next[0]!=NULL){
		cout<<head->data<<" ";
		head=head->next[0];
	}
}
int main(int argc,const char* argv[]){
	Node* head=new Node;
	Node* node=new Node;
	for(int i=1;i<argc;i++){
	       node=insert_at_beg(&head,atoi(argv[i]));
	}
	print_ll(node);
	return 0;
}
