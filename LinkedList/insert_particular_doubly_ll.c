#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next[2];
};
struct Node* insert_at_particular(struct Node* head,struct Node* node,int new_data){
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=new_data;
	struct Node* temp=head;
	struct Node* temp1=NULL;
	while(temp->next[0]!=node){
		temp=temp->next[0];
	}
	temp1=temp->next[0];
	new_node->next[1]=temp;
	new_node->next[0]=temp1;
	temp->next[0]=new_node;
	temp1->next[1]=new_node;
	return head;
}
void print_ll(struct Node* head){
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next[0];
	}
}
int main(int argc,const char *argv[]){
	int n=atoi(argv[1]);
	struct Node* node[n];
	struct Node* head1=(struct Node*)malloc(sizeof(struct Node));
	for(int i=0;i<n;i++){
		node[i]=NULL;
		node[i]=(struct Node*)malloc(sizeof(struct Node));
	}
	int j=0;
        node[j]->data=atoi(argv[2]);
	node[j]->next[0]=node[j+1];
	node[j]->next[1]=NULL;
	j++;
	for(int i=3;i<argc;i++){
             node[j]->data=atoi(argv[i]);
	     node[j]->next[0]=node[j+1];
	     node[j]->next[1]=node[j-1];
	     j++;
	}
	node[n-1]->data=atoi(argv[argc-1]);
	node[n-1]->next[0]=NULL;
	node[n-1]->next[1]=node[n-2];
	struct Node* head=(struct Node*)malloc(sizeof(struct Node));
	head=node[0];
        head1=insert_at_particular(head,node[2],78);
	print_ll(head1);
	return 0;
}
