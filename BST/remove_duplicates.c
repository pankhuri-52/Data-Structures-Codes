#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct  Node{
	int data;
	struct Node* next[2];
};
struct Node* new_Node(int value){
	struct Node* node=(struct Node*)malloc(sizeof(struct Node));
	node->data=value;
	node->next[0]=NULL;
	node->next[1]=NULL;
}
struct Node* construct_tree(struct Node* root,int arr[],int start,int end){
	if(start>end)
		return NULL;
	root=new_Node(arr[start]);
	if(2*start+1<end && arr[2*start+1]!=-1)
		root->next[0]=construct_tree(root,arr,2*start+1,end);
	if(2*start+2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_tree(root,arr,2*start+2,end);
	return root;
}
struct Node* previous=NULL;
int curr=1;
int max=0;
int node;
int inorder(struct Node* root){
	if(root==NULL)
		return -1;
	inorder(root->next[0]);
	if(previous!=NULL){
		if(root->data==previous->data)
			curr++;
		else
			curr=1;
	}
	if(curr>max){
		max=curr;
               node=root->data;
	}
	previous=root;
	inorder(root->next[1]);
	return node;
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}	
	struct Node* root=(struct Node*)malloc(sizeof(struct Node));
	root=NULL;
	root=construct_tree(root,arr,0,argc-1);
	int max=inorder(root);
	printf("%d",max);
	return 0;
}
