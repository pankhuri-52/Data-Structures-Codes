#include <iostream>
#include <bits/stdc++.h> 
#include <string.h>
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
Node* delete_node(Node* root,int new_data){
       if(root==NULL)
               return NULL;
       root->next[0]=delete_node(root->next[0],new_data);
       root->next[1]=delete_node(root->next[1],new_data);
       if(root->data==new_data && root->next[0]==NULL && root->next[1]==NULL){
               delete(root);
               return NULL;
       }
        return root;
}
Node* construct_binary(Node* root,int arr[],int start,int end){
	if(start>end)
		return NULL;
	root=new Node(arr[start]);
	if(2*start+1<end && arr[2*start+1]!=-1)
		root->next[0]=construct_binary(root->next[0],arr,2*start+1,end);
	if(2*start+2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_binary(root->next[1],arr,2*start+2,end);
	return root;
}
void inorder(Node* root){
        if(root==NULL)
                return;
        inorder(root->next[0]);
        cout<<root->data<<" ";
        inorder(root->next[1]);
}
int main(int argc,const char *argv[]){
        int arr[argc];
        int k=0;
        for(int i=1;i<argc;i++){
           arr[k++]=atoi(argv[i]);
        }
        Node* root=construct_binary(root,arr,0,argc-1);
        delete_node(root,3);
        inorder(root);
        return 0;
}
