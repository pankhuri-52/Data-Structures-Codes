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
struct Node* insert_at_beg(struct Node* head,int new_data){
	struct Node* temp=head;
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->next=temp;
	temp=new_node;
	head=temp;
	return head;
}
struct Node* insert_at_particular(struct Node* prev,int new_data){
	struct Node* temp=prev;
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_data;
	new_node->next=temp->next;
	prev->next=new_node;
	return temp;
}
struct Node* insert_at_end(struct Node* head,int new_data){
	struct Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_data;
	temp->next=new_node;
	new_node->next=NULL;
	return head;
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
	struct Node* head1=insert_at_beg(head,6);
	print_linkedlist(head1);
	struct Node* head2=insert_at_particular(node[2],7);
	print_linkedlist(head2);
	struct Node* head3=insert_at_end(head1,8);
	print_linkedlist(head3);
	return 0;
}
