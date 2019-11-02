#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* removal_duplicates(struct Node* head){
   struct Node* head1=NULL;
   struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
   struct Node* temp=head;
   new_node->data=temp->data;
   new_node->next=NULL;
   head1=new_node;

   struct Node* temp1=head1;
   temp=temp->next;
 
   while(temp!=NULL){
       if(temp->data==temp1->data){
           temp=temp->next;
       } else {
           struct Node* new_node1=(struct Node*)malloc(sizeof(struct Node));
          new_node1->data=temp->data;
          new_node1->next=NULL;
	  temp1->next=new_node1;
	  temp1=new_node1;
           temp=temp->next;
       }
   }

   return head1;
}
void printList(struct Node* head){
	struct Node* temp=head;
		while(temp!=NULL){
			printf("%d",temp->data);
			temp=temp->next;
		}
}
int main(int argc,const char *argv[]){
    int n=atoi(argv[1]);
    struct Node* node[n];
    for(int i=0;i<n;i++){
        node[i]=NULL;
        node[i]=(struct Node*)malloc(sizeof(struct Node));
    }
    int j=0;
    for(int i=2;i<argc;i++){
        node[j]->data=atoi(argv[i]);
        node[j]->next=node[j+1];
        j++;
    }
    node[n-1]->data=atoi(argv[argc-1]);
    node[n-1]->next=NULL;
    struct Node* head=removal_duplicates(node[0]);
    printList(head);
	    return 0;
}
