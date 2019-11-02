#include <iostream>
#include <string.h>
#include <queue>
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
	while(i<n){
		Node* new_node=new Node(arr[i]);
		root=new_node;
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
	queue <Node *> q;
	q.push(root);
	while(q.empty()==false){
		Node* temp=q.front();
		cout<<temp->data<<" ";
		q.pop();
		if(temp->next[0]!=NULL)
		q.push(temp->next[0]);
		if(temp->next[1]!=NULL)
		q.push(temp->next[1]);
		}
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
