#include <iostream>
#include <string.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
Node* move(Node* head){
   Node* temp=head;
   int max=0;
   int min=999;
   Node* prev=head;
   Node* Next=head;
   Node* min_node=NULL;
   Node* max_node=NULL;
   while(temp){
         if(temp->data<min){
                 min=temp->data;
	 }
	 if(temp->data>max){
		 max=temp->data;
	 }
	 temp=temp->next;
   }
   temp=head;
   while(temp->next->data!=min){
	   temp=temp->next;
   }
   prev=temp;
   min_node=prev->next;
   Next=temp->next->next;
   prev->next=Next;

   Node* temp1=head;
   prev=head;
   Next=head;
   while(temp1->next->data!=max){
	   temp1=temp1->next;
   }
   prev=temp;
   max_node=prev->next;
   Next=temp->next->next;
   prev->next=Next;
   
   min_node->next=head;
   head=min_node;
   temp=head;
  while(temp->next){
	  temp=temp->next;
  } 
  temp->next=max_node;
  max_node->next=NULL;

   return head;
}
void print_linkedlist(Node* head){
	Node* temp=head;
	if(temp==NULL)
		return;
	else{
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
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
	for(int i=2;i<argc;i++){
             node[j]->data=atoi(argv[i]);
	     node[j]->next=node[j+1];
	     j++;
        }
	node[n-1]->data=atoi(argv[argc-1]);
	node[n-1]->next=NULL;
	Node* head1=move(node[0]);
	print_linkedlist(head1);
	//move(node[0]);
	return 0;
}
