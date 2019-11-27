#include <iostream>
#include <string.h>
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
/*void print(Node* root){
	queue <Node *>q;
	q.push(root);
	int flag,flag1;
	while(q.empty()==false){
		int count=q.size();
		flag=0,flag1=0;
		while(count>0){
			Node* node=q.front();
			cout<<node->data<<" ";
			q.pop();
			if(node->next[0]!=NULL){ 
				if(node->next[0]->data<root->data){
					flag=1;
				        q.push(node->next[0]);
				}
				else{
					flag1=1;
					q.push(node->next[1]);
				}
			}
			if(node->next[1]!=NULL){
				if((node->next[1]->data<root->data) && (flag==0)){
					q.push(node->next[0]);
					flag=1;
				}
				else if((node->next[1]->data>root->data) && (flag1==0)){
					q.push(node->next[1]);
					flag1=1;
				}
			}
			count--; 
		}
	}
}*/
Node* new_node(int value){
	Node* node=new Node(value);
	return node;
}
Node* insert(Node* head,int value){
	if(head==NULL)
		return new_node(value);
	if(value>head->data)
		head->next[1]=insert(head->next[1],value);
	if(value<head->data)
		head->next[0]=insert(head->next[0],value);
	return head;
}
void inorder(Node* root){
	if(root==NULL)
		return;
	inorder(root->next[0]);
	cout<<root->data<<" ";
	inorder(root->next[1]);
}
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
int main(int argc,char *argv[]){
	Node* head=NULL;
	head=insert(head,atoi(argv[1]));
	for(int i=1;i<argc;i++){
		insert(head,atoi(argv[i]));
	}
	inorder(head);
        return 0;
}
