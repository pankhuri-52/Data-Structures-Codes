#include <iostream>
#include <string.h>
using namespace std;
class Node{
	public:
		string data;
		Node* next[2];
		Node(string data){
			this->data=data;
			next[0]=NULL;
			next[1]=NULL;
		}
};
int height(Node* root){
	if(root==NULL)
		return 0;
	int l=height(root->next[0]);
	int r=height(root->next[1]);
	if(l>r)
		return (l+1);
	else
		return (r+1);
}
void print_nodes(Node* root,int level){
	if(root==NULL)
		return;
	else if(level==1)
		cout<<root->data<<" ";
	else{
		print_nodes(root->next[0],level-1);
		print_nodes(root->next[1],level-1);
	}
}
void print(Node* root){
	int h=height(root);
	for(int i=1;i<=h;i++){
		print_nodes(root,i);
	}
}
Node* construct_binary(string arr[],Node* root,int i,int n){
	if(i<n){
		Node* new_node=new Node(arr[i]);
		root=new_node;
		if(arr[2*i+1]!="_")
			root->next[0]=construct_binary(arr,root->next[0],2*i+1,n);
		if(arr[2*i+2]!="_")
			root->next[1]=construct_binary(arr,root->next[1],2*i+2,n);
	}
	return root;
}
int main(int argc,const char *argv[]){
	int n=argc-1;
	int k=0;
	string arr[argc];
        for(int i=1;i<argc;i++){
		arr[k++]=argv[i];
	}
	Node* root=construct_binary(arr,root,0,n);
	print(root);
	return 0;
}
