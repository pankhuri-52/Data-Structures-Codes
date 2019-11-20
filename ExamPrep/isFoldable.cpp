#include <iostream>
#include <queue>
using namespace std;
#define bool int
#define true 1
#define false 0
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
	if(2*start+1<end && arr[2*start+1]!=-1)
          root->next[0]=construct_tree(root,arr,2*start+1,end);
	if(2*start+2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_tree(root,arr,2*start+2,end);
	return root;
}
bool Folded(Node* node1,Node* node2){
	if(node1==NULL && node2==NULL)
		return true;
	if(node1==NULL || node2==NULL)
		return false;
	return Folded(node1->next[0],node2->next[1]) && Folded(node1->next[1],node2->next[0]);
}
bool isFolded(Node* root){
	if(root==NULL)
		return true;
	return Folded(root->next[0],root->next[1]);
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root=construct_tree(root,arr,0,argc-1);
	if(isFolded(root)==true)
		cout<<"Tree can be folded"<<endl;
	else
		cout<<"Tree cannot be folded"<<endl;
	return 0;
}
