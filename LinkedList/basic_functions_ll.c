#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void print_linkedlist(struct Node* node){
	while(node!=NULL){
		printf("%d ",node->data);
		node=node->next;
	}
}
struct Node* insert_beg(struct Node* head,int new_val){
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_val;
	new_node->next=head;
	head=new_node;
	return head;
}
struct Node* insert_end(struct Node* head,int val){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
        temp=head;
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=val;
	new_node->next=NULL;

	while(temp->next!=NULL){
		temp=temp->next;		
	}
	temp->next=new_node;
	return head;
}
struct Node* insert_between(struct Node* head,struct Node* addr,int mid){
	struct Node* temp=addr->next;
        struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	addr->next=new_node;
	new_node->data=mid;
	new_node->next=temp;
	return head;
}
struct Node* delete_beg(struct Node* head){
	head=head->next;
	return head;
}
struct Node* delete_end(struct Node* head){
	struct Node* temp=head;
	struct Node* secondlast=NULL;
	while(temp->next!=NULL){
              secondlast=temp;
	      temp=temp->next;
	}
	secondlast->next=NULL;
	return head;
}
struct Node* delete_node(struct Node* head,struct Node* addr){
	struct Node* temp=head;
	struct Node* prev;
	while(temp->next!=addr->next){
		prev=temp;
		temp=temp->next;
	}
	prev->next=addr->next;
	return head;
}
int main(int argc,char *argv[]){
      int n=atoi(argv[1]);
      int val=atoi(argv[2]);
     int value=atoi(argv[3]);
      int mid=atoi(argv[4]);
      struct Node* node[n];
      for(int i=0;i<n;i++){
	      node[i]=NULL;
	      node[i]=(struct Node*)malloc(sizeof(struct Node));
      }
      int j=0;
      for(int i=0;i<n-1;i++){
	      j++;
	      node[i]->data=j;
	      node[i]->next=node[i+1];
      }
      node[n-1]->data=j+1;
      node[n-1]->next=NULL;
      printf("The Linked List is\n");
     print_linkedlist(node[0]);
    
     printf("\nAfter inserting given value at the beginning\n");
     struct Node* head=insert_beg(node[0],val);
      print_linkedlist(head);

      printf("\nAfter inserting given value at the end\n");
      struct Node* end=insert_end(node[0],value);
      print_linkedlist(end);

      printf("\nAfter inserting given value at given position\n");
      struct Node* bet=insert_between(node[0],node[2],mid);
      print_linkedlist(bet);

      printf("\nAfter deleting the node at the beginning\n");
      struct Node* start=delete_beg(node[0]);
      print_linkedlist(start);

      printf("\nAfter deleting the node at the end\n");
      struct Node* end1=delete_end(node[0]);
      print_linkedlist(end1);

      printf("\nAfter deleting the node at specific position\n");
      struct Node* bet1=delete_node(node[0],node[2]);
      print_linkedlist(bet1);
      return 0;
}
