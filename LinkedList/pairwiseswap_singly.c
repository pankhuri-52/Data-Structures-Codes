#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void print_ll(struct Node* head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
}
struct Node* pair_swap(struct Node* head){
	struct Node* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	temp=head;
	if(count%2==0){
	while(temp!=NULL){
              int x=temp->data;
	      temp->data=temp->next->data;
	      temp->next->data=x;
	      temp=temp->next->next;
	  }
	}
	else{
		while(temp->next!=NULL){
              int x=temp->data;
              temp->data=temp->next->data;
              temp->next->data=x;
              temp=temp->next->next;
           }
	}
	return head;
}
int main(int argc,char *argv[]){
	int n=atoi(argv[1]);
	struct Node* node[n];
	for(int i=0;i<n;i++){
		node[i]=NULL;
		node[i]=(struct Node*)malloc(sizeof(struct Node));
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
	struct Node* head=node[0];
	struct Node* head1=pair_swap(head);
	print_ll(head1);
	return 0;
}
