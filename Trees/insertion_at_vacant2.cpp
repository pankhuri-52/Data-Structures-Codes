#include <iostream>
#include <queue>
using namespace std;
int pp[99];
int z=0;
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
void insert(Node* root,int key){
	if(root==NULL)
		return;
	queue<Node*>q;
	q.push(root);
	while(q.empty()==false){
		Node* root=q.front();
		q.pop();
		if(root->next[0]==NULL){
			root->next[0]=new Node(key);
			break;
		} else {
			q.push(root->next[0]);
		}
		if(root->next[1]==NULL){
			root->next[1]=new Node(key);
			break;
		} else {
			q.push(root->next[1]);
		}
	}
}
void inorder(Node* root){
	if(root==NULL)
		return;
	inorder(root->next[0]);
	pp[z++]=root->data;
	inorder(root->next[1]);
}
int main(int argc,const char *argv[]){
	int key=atoi(argv[1]);
	int arr[argc];
	int k=0;
	for(int i=2;i<argc;i++){
              arr[k++]=atoi(argv[i]);
	}
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	Node* root=construct_tree(root,arr,0,k);
	insert(root,key);
	inorder(root);
	for(int i=0;i<z-1;i++){
		cout<<pp[i]<<" ";
	}
	cout<<pp[z-1];
	return 0;
}
