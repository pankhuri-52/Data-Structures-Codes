#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next[2];
};
struct Node* insert_at_end(struct Node** head,int new_data){
     Node* new_node=new Node;
     new_node->data=new_data;
     new_node->next[0]=NULL;
     new_node->next[1]=NULL;
     if((*head)==NULL)
	    (*head)=new_node;
     else{
	     Node* temp=new Node;
	     temp=(*head);
	     while(temp->next[0]!=NULL){
		     temp=temp->next[0];
	     }
	     temp->next[0]=new_node;
	     new_node->next[1]=temp;
     }
    return (*head);
}
void print_ll(struct Node* head){
		while(head!=NULL){
			cout<<head->data<<" ";
			head=head->next[0];
	}
}
int main(int argc,const char *argv[]){
	Node* head=new Node;
	head=NULL;
	Node* head1=new Node;
	for(int i=1;i<argc;i++){
	     head1=insert_at_end(&head,atoi(argv[i]));
	}
	print_ll(head1);
	return 0;
}
