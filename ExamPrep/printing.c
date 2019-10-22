#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void print_linkedlist(struct Node* head){
	struct Node* temp=head;
	if(temp==NULL)
		return;
	else{
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
	printf("\n");
}
void reverse_linkedlist(struct Node* head){
	struct Node* prev=NULL;
	struct Node* current=head;
	struct Node* Next=NULL;
	while(current!=NULL){
		Next=current->next;
		current->next=prev;
		prev=current;
		current=Next;
	}
	head=prev;
        print_linkedlist(head);
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
	struct Node* head=node[0];
	print_linkedlist(head);
        reverse_linkedlist(head);
	return 0;
}
