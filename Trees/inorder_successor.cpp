#include <iostream>
using namespace std;
int arr1[99];
int z=0;
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
Node* construct_tree(Node* root,int array[],int start,int end){
    if(start>end)
     return NULL;
     
     root=new Node(array[start]);
     if(2*start+1<end && array[2*start+1]!=0)
     root->next[0]=construct_tree(root,array,2*start+1,end);
     if(2*start+2<end && array[2*start+2]!=0)
     root->next[1]=construct_tree(root,array,2*start+2,end);
     
     return root;
}
void inorder(Node* root){
    if(root==NULL)
    return;
    
    inorder(root->next[0]);
    arr1[z++]=root->data;
    inorder(root->next[1]);
}
int main(int argc,const char *argv[]){
    int key=atoi(argv[1]);
    int array[argc];
    int k=0;
    for(int i=2;i<argc;i++){
        array[k++]=atoi(argv[i]);
    }
    Node* root=construct_tree(root,array,0,k);
    inorder(root);
    for(int i=0;i<z-1;i++){
        if(arr1[i]==key)
        cout<<arr1[i+1];
    }
    if(arr1[z-1]==key)
    cout<<"-1";
}
