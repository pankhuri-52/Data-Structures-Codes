#include <iostream>
using namespace std;
int pp[99];
int m=0;
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
void inorder(Node* root){
	if(root==NULL)
		return;
	inorder(root->next[0]);
	pp[m++]=root->data;
	inorder(root->next[1]);
}
int main(int argc,const char *argv[]){
	int key=atoi(argv[1]);
	int arr[argc];
	int k=0;
	for(int i=2;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	int arr1[k-1];
	int z=0;
	for(int i=0;i<k;i++){
		if(arr[i]!=key)
			arr1[z++]=arr[i];
	}
	Node* root=construct_tree(root,arr1,0,z);
	inorder(root);
	for(int i=0;i<m-1;i++){
		cout<<pp[i]<<" ";
	}
	cout<<pp[m-1];
	return 0;
}
