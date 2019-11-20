#include <iostream>
#include<bits/stdc++.h>
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
bool BST(Node* root,int min,int max){
	if(root==NULL)
		return true;
	if(root->data<min || root->data>max)
		return false;
	return	BST(root->next[0],min,root->data) && BST(root->next[1],root->data,max);
}
Node* construct_binary(Node* root,int arr[],int start,int end){
	if(start>end)
		return NULL;
	root=new Node(arr[start]);
	if(2*start+1<end && arr[2*start+1]!=-1)
		root->next[0]=construct_binary(root,arr,2*start+1,end);
	if(2*start+2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_binary(root,arr,2*start+2,end);
	return root;
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root=construct_binary(root,arr,0,argc-1);
	if(BST(root,INT_MIN,INT_MAX)==false)
		cout<<"This binary tree is not a BST"<<endl;
	else
		cout<<"This binary tree is a BST"<<endl;
	return 0;
}
