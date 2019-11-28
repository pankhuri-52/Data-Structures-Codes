#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct  Node{
	int data;
	struct Node* next[2];
};
struct Node* construct_tree(struct Node* root,int arr[],int start,int end){
	printf("Entered");
	if(start>end)
		return NULL;
	root=(struct Node*)malloc(sizeof(struct Node));
	root->data=arr[start];
	root->next[0]=NULL;
	root->next[1]=NULL;
	if(2*start+1<end && arr[2*start+1]!=-1)
		root->next[0]=construct_tree(root,arr,2*start+1,end);
	if(2*start+2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_tree(root,arr,2*start+2,end);
	return root;
}
/*void inorder(struct Node* root){
	if(root==NULL)
		return;
	inorder(root->next[0]);
	printf("%d ",root->data);
	inorder(root->next[1]);
}*/
int main(int main,int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	
	struct Node* root=NULL;
	root=construct_tree(root,arr,0,argc-1);
	printf("Hello");
	//inorder(root);
	return 0;
}
