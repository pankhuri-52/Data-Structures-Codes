#include <iostream>
using namespace std;
int arr1[99],arr2[99],arr3[99];
int m=0,n=0,z=0;
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
void preorder(Node* root){
    if(root==NULL)
     return;
     arr1[m++]=root->data;
     preorder(root->next[0]);
     preorder(root->next[1]);
}
void postorder(Node* root){
     if(root==NULL)
     return;
     postorder(root->next[0]);
     postorder(root->next[1]);
     arr2[n++]=root->data;
}
void inorder(Node* root){
    if(root==NULL)
    return;
    inorder(root->next[0]);
    arr3[z++]=root->data;
    inorder(root->next[1]);
}
int main(int argc,const char *argv[]){
    string traversal=argv[1];
    int arr[argc];
    int k=0;
    for(int i=2;i<argc;i++){
        arr[k++]=atoi(argv[i]);
    }
    Node* root=construct_tree(root,arr,0,k);
    if(traversal=="X"){
     preorder(root);
     for(int i=0;i<m-1;i++){
         cout<<arr1[i]<<" ";
     }
     cout<<arr1[m-1];
    }
    if(traversal=="P"){
    postorder(root);
    for(int i=0;i<n-1;i++){
        cout<<arr2[i]<<" ";
      }
      cout<<arr2[n-1];
    }
    if(traversal=="I"){
     inorder(root);
     for(int i=0;i<z-1;i++){
         cout<<arr3[i]<<" ";
     }
     cout<<arr3[z-1];
    }
    return 0;
}
