#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void delete_node(Node* head,int index){
    Node* temp=head;
    int count=0;
    while(temp->next!=NULL){
        if(count!=index){
            cout<<temp->data<<" ";
        }
        count++;
        temp=temp->next;
    }
    if(count!=index){
        cout<<temp->data;
    }
}
int main(int argc,const char *argv[]){
    int index=atoi(argv[1]);
    int n=argc-2;
    Node* node[n];
    for(int i=0;i<n;i++){
        node[i]=NULL;
        node[i]=new Node;
    }
    int j=0;
    for(int i=2;i<argc;i++){
        node[j]->data=atoi(argv[i]);
        node[j]->next=node[j+1];
        j++;
    }
    node[n-1]->data=atoi(argv[argc-1]);
    node[n-1]->next=NULL;
    Node* head=node[0];
    delete_node(head,index);
    return 0;
}
