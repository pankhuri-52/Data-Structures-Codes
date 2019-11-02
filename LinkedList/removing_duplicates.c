#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next[2];
};
void printList(struct Node* head){
        while(head!=NULL){
            printf("%d ",head->data);
            head=head->next[0];
        }
}
struct Node* remove_duplicates(struct Node* head){
     struct Node* temp=head;
     struct Node* head1=(struct Node*)malloc(sizeof(struct Node));
     head1->data = head->data;
     head1->next[0] = NULL;
     head1->next[1] = NULL;
     int flag=0;
     struct Node* prev = head1;
     struct Node* temp1=head1;
	     while(temp!=NULL){
		     while(temp1!=NULL){
			     if(temp->data==temp1->data){
				    flag=1;
				     break;
			     }
			     prev = temp1;
			     temp1 = temp1->next[0];
		     }
		     if(flag==0)
			{
				 struct Node* new_node1=(struct Node*)malloc(sizeof(struct Node));
				 new_node1->data=temp->data;
				 prev->next[0]=new_node1;
				 new_node1->next[0]=NULL;
				 new_node1->next[1]=prev;
			 }
		     flag=0;
		     temp1 = head1;
		     prev = temp1;
		     temp=temp->next[0];
	     }
	     return head1;
	}
	int main(int argc,const char *argv[]){
	    int n=atoi(argv[1]);
	    struct Node* node[n];
	    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    for(int i=0;i<n;i++){
        node[i]=NULL;
        node[i]=(struct Node*)malloc(sizeof(struct Node));
    }
    int j=0;
    node[j]->data=atoi(argv[2]);
    node[j]->next[1]=NULL;
    node[j]->next[0]=node[j+1];
    j++;
    for(int i=3;i<argc;i++){
        node[j]->data=atoi(argv[i]);
        node[j]->next[0]=node[j+1];
	node[j]->next[1]=node[j-1];
        j++;
    }
    node[n-1]->data=atoi(argv[argc-1]);
    node[n-1]->next[1]=node[n-2];
    node[n-1]->next[0]=NULL;
    head=node[0];
    struct Node* head1=remove_duplicates(head);
    printList(head1);
    return 0;
}
