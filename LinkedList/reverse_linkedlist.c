#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void print_ll(struct Node* head){
	struct Node* temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
	}
}
struct Node* reverse(struct Node* head){
	struct Node* prev=NULL;
	struct Node* Next=NULL;
	struct Node* current=head;
	while(current!=NULL){
	     Next=current->next;
             current->next=prev;
	     prev=current;
	     current=Next;
	}
	head=prev;
	return head;
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
        for(int i=2;i<argc;i++){
		node[j]->data=atoi(argv[i]);
		node[j]->next=node[j+1];
		j++;
        }
        node[n-1]->data=atoi(argv[argc-1]);
	node[n-1]->next=NULL;
	head=node[0];
	print_ll(head);
	struct Node* head1=reverse(head);
	print_ll(head1);
	return 0;
}
