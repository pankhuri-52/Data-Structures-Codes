#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
struct Node{
	int data;
	struct Node* next[2];
};
struct Node* new_node(int new_data){
	struct Node* node=(struct Node*)malloc(sizeof(struct Node));
	node->data=new_data;
	node->next[0]=NULL;
	node->next[1]=NULL;
}
struct Node* construct_binary(int arr[],int* postIndex,int key,int min,int max,int k){
	if(*postIndex<0)
		return NULL;
	struct Node* root=NULL;

	if(key>min && key<max){
		root=new_node(key);
		*postIndex=*postIndex-1;
		if(*postIndex>=0){
			root->next[1]=construct_binary(arr,postIndex,arr[*postIndex],key,max,k);
		        root->next[0]=construct_binary(arr,postIndex,arr[*postIndex],min,key,k);
		}
	}
	return root;
}
struct Node* constructTree(int arr[],int k){
	int postIndex = k-1;
    return construct_binary(arr, &postIndex, arr[postIndex],
                             INT_MIN, INT_MAX, k);
}
void printInorder(struct Node* root){
	if(root==NULL)
		return;
	printInorder(root->next[0]);
	 printf("%d ",root->data);
        printInorder(root->next[1]);
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	struct Node *root = constructTree(arr, k);
	printInorder(root);
	return 0;
}
