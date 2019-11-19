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
	if(root==NULL)
		return NULL;
	root=new Node(arr[start]);
	if(2*start+1<end && arr[2*start+1]!=-1)
		root->next[0]=construct_binary(root,arr,2*start+1,end);
	if(2*start+2<end && arr[2*start+2]!=-1)
		root->next[1]=construct_binary(root,arr,2*start+2,end);
	return root;
}
void right_sibling(Node* root){
	if(root==NULL){
		return;
	}
/*	queue<Node*>q;
	q.push(root);
	while(q.empty()==false){
		int count=q.size();
		while(count>0){
			Node* node=q.front();
			q.pop();
			if(node->next[0]!=NULL)
			q.push(node->next[0]);
			if(node->next[1]!=NULL)
			q.push(node->next[1]);
			if(node->next[0]->data==2)
				cout<<node->next[1]->data<<" ";
			count--;
		}
	}
*/
	if(root->next[0]!=NULL)
		right_sibling(root->next[0]);
	if(root->next[1]!=NULL)
		right_sibling(root->next[1]);
	if(root->next[0]!=NULL && root->next[0]->data==34)
		cout<<root->next[1]->data;
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
        Node* root=construct_binary(root,arr,0,argc-1);
	right_sibling(root);
	return 0;
}
