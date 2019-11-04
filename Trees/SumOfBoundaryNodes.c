#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node* next[2];
};
void SumOfBoundaryNodes(struct Node* root){

}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	struct Node* root=construct_binary(root,arr,0,argc-1);
	SumOfBoundaryNodes(root);
	return 0;
}
