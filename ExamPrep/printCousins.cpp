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
int getLevel(Node* root,int key,int level){
	//cout<<"Hi";
	if(root==NULL)
		return 0;
	if(root->data==key)
		return level;
	int downlevel=getLevel(root->next[0],key,level+1);
	if(downlevel!=0)
		return downlevel;
	return getLevel(root->next[1],key,level+1);
}
void printNodes(Node* root,int key,int level){
	//cout<<"Bie";
	if(root==NULL || level<2)
		return;
         if(level==2){
		if(root->next[0]->data==key || root->next[1]->data==key)
			return;
		if(root->next[0]!=NULL)
			cout<<root->next[0]->data<<" ";
		if(root->next[1]!=NULL)
			cout<<root->next[1]->data;
	}
	else if(level>2){
		printNodes(root->next[0],key,level-1);
	        printNodes(root->next[1],key,level-1);
	}
}
void print_Cousins(Node* root,int key){
	//cout<<"Hello";
	int level=getLevel(root,key,1);
	printNodes(root,key,level);
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root=construct_tree(root,arr,0,argc-1);
	//Node* node=new Node(arr[5]);
	print_Cousins(root,5);
	//cout<<"FInish";
	return 0;
}
