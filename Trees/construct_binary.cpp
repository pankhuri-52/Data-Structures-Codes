#include <iostream>
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
Node* construct_binary(int arr[],Node* root,int i,int n){
	if(i<n){
		Node* temp=new Node(arr[i]);
		root=temp;
		if(arr[2*i+1]!=-1)
			root->next[0]=construct_binary(arr,root->next[0],2*i+1,n);
		if(arr[2*i+2]!=-1)
			root->next[1]=construct_binary(arr,root->next[1],2*i+2,n);
	}
	return root;
}
void print(Node* root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	print(root->next[0]);
	print(root->next[1]);
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root=construct_binary(arr,root,0,argc-1);
	print(root);
	return 0;
}
