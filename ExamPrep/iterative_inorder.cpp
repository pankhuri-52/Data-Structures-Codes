#include <iostream>
#include <stack>
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
		root->next[0]=construct_binary(root,arr,2*start+1,end);
	if(2*start+2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_binary(root,arr,2*start+2,end);
	return root;
}
/*void print_level(Node* root){
	if (root==NULL)
		return;
	queue <Node*> q;
	Node* node=root;
	while(node!=NULL){
		cout<<node->data<<" ";
		if(node->next[0]!=NULL)
			q.push(node->next[0]);
		if(node->next[1]!=NULL)
			q.push(node->next[1]);
		node=q.front();
		q.pop();
	}
}*/
void iterative_inorder(Node* root){
	stack <Node*> stk;
	Node* current=root;
        while(current!=NULL || stk.empty()==false){
		while(current!=NULL){
			stk.push(current);
			current=current->next[0];
		}
		current=stk.top();
		stk.pop();
		cout<<current->data<<" ";
		current=current->next[1];
	}
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Node* root=construct_binary(root,arr,0,argc-1);
	iterative_inorder(root);
	return 0;
}
