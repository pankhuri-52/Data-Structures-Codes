#include <iostream>
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
void print(int paths[],int pathlen){
	for(int i=0;i<pathlen;i++){
		cout<<paths[i]<<"-";
	}
	cout<<endl;
}
void print_path(Node* root,int paths[],int pathlen){
	if(root==NULL)
		return;
	paths[pathlen]=root->data;
	pathlen++;
	 if(root->next[0]==NULL && root->next[1]==NULL)
		print(paths,pathlen);
        else{
		print_path(root->next[0],paths,pathlen);
		print_path(root->next[1],paths,pathlen);
	}
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
	int paths[99];
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root=construct_binary(root,arr,0,argc-1);
	print_path(root,paths,0);
	return 0;
}
