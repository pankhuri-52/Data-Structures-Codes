#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next[2];
};
void print_ll(struct Node* head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next[0];
	}
}
struct Node* swap(struct Node* head,int n){
	struct Node* temp=head;
	struct Node* temp1=head;
	int count=0;
	while(temp1!=NULL){
		count++;
		temp1=temp1->next[0];
	}
	for(int i=0;i<n-1;i++){
		temp=temp->next[0];
	}
	struct Node* temp2=head;
	for(int i=0;i<(count-n);i++){
		temp2=temp2->next[0];
	}
	int x=temp->data;
	temp->data=temp2->data;
	temp2->data=x;
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
	node[j]->data=atoi(argv[2]);
	node[j]->next[1]=NULL;
	node[j]->next[0]=node[j+1];
	j++;
	for(int i=3;i<argc;i++){
		node[j]->data=atoi(argv[i]);
		node[j]->next[1]=node[j-1];
		node[j]->next[0]=node[j+1];
		j++;
	}
	node[n-1]->data=atoi(argv[argc-1]);
	node[n-1]->next[0]=NULL;
	node[n-1]->next[1]=node[n-2];
	struct Node* head=node[0];
	struct Node* head1=swap(head,2);
	print_ll(head);
	return 0;
}
