#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
void palindrome(Node* head,int n){
	//Copied the data to another linked list otherwise head will change after reversing
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
        Node* copied_list_head=head1;       
        
	//Reverse Logic
	Node* current=head;
	Node* prev=NULL;
	Node* temp2=head;
	Node* Next=NULL;
	while(current!=NULL){
		Next=current->next;
		current->next=prev;
		prev=current;
		current=Next;
	}
	temp2=prev;
        /*
	//Printing in reverse order
	while(temp2!=NULL){
		cout<<temp2->data<<" ";
		temp2=temp2->next;
	}
	cout<<endl;

	//Printing in serial order
	Node* temp3=head1;
	while(temp3!=NULL){
		cout<<temp3->data<<" ";
		temp3=temp3->next;
	}
        */
	//Not entering into the loop!!!!!!!!!!!!
	int count=0;
         Node* temp3=head1;

	while(temp2!=NULL && temp3!=NULL){
		if(temp2->data==temp3->data)
			count++;
		temp2=temp2->next;
		temp3=temp3->next;
	}
	cout<<endl;
	if(count==n)
		cout<<"Yes,it is palindrome"<<endl;
	else
		cout<<"Not a palindrome"<<endl;
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
	palindrome(head,n);
	/*if(palindrome(head,n)==1)
		cout<<"Yes, Palindrome it is"<<endl;
	else
		cout<<"No, it is not a Palindrome"<<endl;*/
	return 0;

}
