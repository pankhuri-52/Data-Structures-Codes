#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* insertion(Node* head,int key,int index){
    Node* temp=head;
    Node* new_node=new Node;
    new_node->data=key;
    if(index==0){
        new_node->next=head;
        head=new_node;
    } else {
    for(int i=0;i<index-1;i++){
        temp=temp->next;
    }
    Node* temp1=temp;
    new_node->next=temp->next;
    temp1->next=new_node;
    }
    return head;
}
void print_ll(Node* head){
    while(head->next!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data;
}
int main(int argc,const char* argv[]){
    int key=atoi(argv[1]);
    int index=atoi(argv[2]);
    int n=argc-3;
    Node* node[n];
    for(int i=0;i<argc;i++){
        node[i]=NULL;
        node[i]=new Node;
    }
    int j=0;
    for(int i=3;i<argc;i++){
        node[j]->data=atoi(argv[i]);
        node[j]->next=node[j+1];
        j++;
    }
    node[n-1]->data=atoi(argv[argc-1]);
    node[n-1]->next=NULL;
    Node* head=node[0];
    Node* head1=insertion(head,key,index);
    print_ll(head1);
    return 0;
}
