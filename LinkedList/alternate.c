#include<stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void printList(struct Node* head){
	//struct Node* temp=head->next;
	int count=0;
        while(head!=NULL){
		if(count%2==0)
            printf("%d",head->data);
		count++;
            head=head->next;
    }
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
    printList(head);
    return 0;
   }
