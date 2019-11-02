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
struct Node* pair_swap(struct Node* head){
        struct Node* temp=head;
        int count=0;
        while(temp!=NULL){
                count++;
                temp=temp->next[0];
        }
        temp=head;
        if(count%2==0){
        while(temp!=NULL){
              int x=temp->data;
              temp->data=temp->next[0]->data;
              temp->next[0]->data=x;
              temp=temp->next[0]->next[0];
          }
        }
        if(count%2!=0){
                while(temp->next[0]!=NULL){
              int x=temp->data;
              temp->data=temp->next[0]->data;
              temp->next[0]->data=x;
              temp=temp->next[0]->next[0];
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
        struct Node* head=node[0];
        struct Node* head1=pair_swap(head);
        print_ll(head1);
        return 0;
}
