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
Node* construct_binary(Node* root,int arr[],int start,int end){
	if(start>end)
	return NULL;
	root=new Node(arr[start]);
	if(2*start+1<end && arr[2*start+1]!=-1)
		root->next[0]=construct_binary(root->next[0],arr,2*start+1,end);
	if(2*start+2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_binary(root->next[1],arr,2*start+2,end);
	return root;
}
void print_level(Node* root){
	if(root==NULL)
		return;

	queue<Node*>q;
	Node* curr;
	q.push(root);
	q.push(NULL);
	cout<<root->data<<" ";
	while(q.size()>1){
		curr=q.front();
		if(curr!=NULL)
                   q.pop();
		if(curr==NULL){
			q.pop();
			cout<<q.front()->data<<" ";
			q.push(NULL);
		} else {
			if(curr->next[0])
				q.push(curr->next[0]);
			if(curr->next[1])
				q.push(curr->next[1]);
		}
	}
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root=construct_binary(root,arr,0,argc-1);
	print_level(root);
	return 0;
}
