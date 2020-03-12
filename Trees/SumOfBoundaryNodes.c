#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
struct Node{
	int data;
	struct Node* next[2];
};
int sum_of_boundary_nodes;
void LeftBoundary(struct Node* root){
	if(root){
		if(root->next[0]){
			sum_of_boundary_nodes+=root->data;
			LeftBoundary(root->next[0]);
		}else if(root->next[1]){
			sum_of_boundary_nodes+=root->data;
			LeftBoundary(root->next[1]);
		}
	}
}
void Leaves(struct Node* root){
	if(root){
		Leaves(root->next[0]);

		if(!(root->next[1]) && !(root->next[1]))
		 sum_of_boundary_nodes+=root->data;

		Leaves(root->next[1]);
	}
}
void RightBoundary(struct Node* root){
	if(root){
		if(root->next[1]){
			RightBoundary(root->next[1]);
			sum_of_boundary_nodes+=root->data;
		} else if(root->next[1]){
			RightBoundary(root->next[0]);
			sum_of_boundary_nodes+=root->data;
		}
	}
}
void SumOfBoundaryNodes(struct Node* root){
   if(root){
	   sum_of_boundary_nodes=root->data;
	   LeftBoundary(root->next[0]);
	   Leaves(root->next[0]);
	   Leaves(root->next[1]);
	   RightBoundary(root->next[1]);
   }
}
struct Node* construct_binary(struct Node* root,int arr[],int start,int end){
	if(start>end)
		return NULL;
	root =(struct Node*)malloc(sizeof(struct Node));
	root->data=arr[start];
	root->next[0] = NULL;
	root->next[1] = NULL;
	if(2*start+1<end && arr[2*start+1]!=-1)
		root->next[0]=construct_binary(root->next[0],arr,2*start+1,end);
	if(2*start*2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_binary(root->next[1],arr,2*start+2,end);
	return root;
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	struct Node* root = NULL;
	root = construct_binary(root,arr,0,argc-1);
	SumOfBoundaryNodes(root);
	if(atoi(argv[argc-1])!=-1){
		sum_of_boundary_nodes += atoi(argv[argc-1]);
	}
	printf("%d",sum_of_boundary_nodes);
	return 0;
}
