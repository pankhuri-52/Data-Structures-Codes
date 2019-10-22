#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
void middle_element(struct Node* head){
	struct Node* temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	int low=0;
	int mid=low+(count-low)/2;
	int n=0;
	temp=head;
	while(n<mid){
		temp=temp->next;
		n++;
	}
	printf("%d\n",temp->data);
}
void last(struct Node* head,int index){
     struct Node* temp=head;
     int count=0;
     while(temp!=NULL){
	     count++;
	     temp=temp->next;
     }
     int nth=count-index;
     int n=0;
     temp=head;
     while(n<nth){
        temp=temp->next;
	n++;
     }
     printf("%d ",temp->data);
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
	middle_element(node[0]);
	last(node[0],4);
	return 0;
}
