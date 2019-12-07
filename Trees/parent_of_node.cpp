#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next[2];
    Node(int data){
        this->data=data;
        next[0]=NULL;
        next[1]=NULL;
    }
};
Node* construct_tree(Node* root,int arr[],int start,int end){
    if(start>end)
    return NULL;
    root=new Node(arr[start]);
    if(2*start+1<end && arr[2*start+1]!=0)
    root->next[0]=construct_tree(root,arr,2*start+1,end);
    if(2*start+2<end && arr[2*start+2]!=0)
    root->next[1]=construct_tree(root,arr,2*start+2,end);
    return root;
}
void print_parent(int key,int arr[],int k,Node* root){
    int parent;
    if(root==NULL)
    return;
    if(root->data==key){
        cout<<"-1";
        return;
    }
    else{
    for(int i=1;i<k;i++){
        if(arr[i]==key){
        parent=(i-1)/2;
        break;
        }
    }
    cout<<arr[parent];
    }
}
int main(int argc,const char *argv[]){
    int key=atoi(argv[1]);
    int arr[argc];
    int k=0;
    for(int i=2;i<argc;i++){
        arr[k++]=atoi(argv[i]);
    }
    Node* root=construct_tree(root,arr,0,k);
    print_parent(key,arr,k,root);
    return 0;
}
