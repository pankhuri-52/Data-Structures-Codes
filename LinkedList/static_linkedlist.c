#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void print_linkedlist(struct Node* node){
	while(node!=NULL){
		printf("%d\n",node->data);
		node=node->next;
	}
}
int main(){
	struct Node* node1=NULL;
	struct Node* node2=NULL;
	struct Node* node3=NULL;
	node1=(struct Node*)malloc(sizeof(struct Node));
	node2=(struct Node*)malloc(sizeof(struct Node));
	node3=(struct Node*)malloc(sizeof(struct Node));
	node1->data=1;
	node1->next=node2;
	node2->data=2;
	node2->next=node3;
	node3->data=3;
	node3->next=NULL;
	print_linkedlist(node1);
	return 0;
}

