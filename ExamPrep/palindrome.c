#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* reverse(struct Node* head){
	  struct Node* current=head;
        struct Node* prev=NULL;
        struct Node* Next=NULL;
        while(current!=NULL){
                Next=current->next;
                current->next=prev;
                prev=current;
                current=Next;
        }
        head=prev;
	return head;
}
void palindrome(struct Node* head){
	struct Node* temp2=head;
        struct Node* temp3=head;
	struct Node* temp=head;

	int count=0;
	while(temp2!=NULL){
		count++;
		temp2=temp2->next;
	}

       struct Node* head1=(struct Node*)malloc(sizeof(struct Node));
        head1->data=temp->data;
        head1->next=NULL;
        struct Node* temp1=head1;
        temp=temp->next;
        while(temp!=NULL){
                struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
                new_node->data=temp->data;
                new_node->next=NULL;
                temp1->next=new_node;
                temp1=new_node;
                temp=temp->next;
        }

        
	 struct Node* head2=reverse(head1);
	/*printf("Reverse Linked List\n");
	while(head2!=NULL){
		printf("%d ",head2->data);
		head2=head2->next;
	}
	printf("\n");

	while(temp3!=NULL){
		printf("%d ",temp3->data);
		temp3=temp3->next;
	}*/
         int count1=0;
	while(head2!=NULL && temp3!=NULL){
              if(head2->data==temp3->data)
		      count1++;
	      head2=head2->next;
	      temp3=temp3->next;
	}
	if(count==count1)
		printf("Yes");
	else
		printf("No");
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
        palindrome(node[0]);
	return 0;
}
