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
Node* insert_at_end(Node* head,int end){
	Node* temp=new Node;
	temp=head;
	Node* new_node=new Node;
	new_node->data=end;
	new_node->next=NULL;
	while(temp->next!=NULL){
		temp=temp->next;
	}
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
	int beg=atoi(argv[2]);
	int end=atoi(argv[3]);
	Node* node[n];
	for(int i=0;i<n;i++){
		node[i]=NULL;
		node[i]=new Node;
	}
	int j=0;
	node[j]->data=atoi(argv[4]);
	node[j]->next=node[j+1];
	j++;
	for(int i=5;i<argc;i++){
		node[j]->data=atoi(argv[i]);
		node[j]->next=node[j+1];
		j++;
	}
	node[n-1]->data=atoi(argv[argc-1]);
	node[n-1]->next=NULL;
	Node* head=node[0];
	Node* head1=insert_at_beginning(head,beg);
	cout<<"AFter inserting in the beginning"<<endl;
	print_list(head1);
	cout<<"AFter inserting at the end"<<endl;
	Node* head2=insert_at_end(head1,end);
	print_list(head2);
	return 0;
}
