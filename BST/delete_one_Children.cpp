#include <iostream>
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
Node* insert(Node* root,int value){
	if(root==NULL)
		return new Node(value);
	if(value<root->data)
		root->next[0]=insert(root->next[0],value);
	if(value>root->data)
		root->next[1]=insert(root->next[1],value);
	return root;
}
Node* deletion_one_child(Node* root,int key){
	if(root==NULL)
		return NULL;
	if(key<root->data)
		deletion_one_child(root->next[0],key);
	else if(key>root->data)
		deletion_one_child(root->next[1],key);
	else{
		if(root->next[0]==NULL && root->next[1]==NULL){
			free(root);
			return NULL;
		}
		else if(root->next[0]==NULL){
			Node* temp=root->next[1];
			free(root);
			return temp;
		}
		//else if(root->next[1]==NULL){
		else{
			Node* temp=root->next[0];
			free(root);
			return temp;
		}
	}
}
void inorder(Node* root){
	if(root==NULL)
		return;
	inorder(root->next[0]);
	cout<<root->data<<" ";
	inorder(root->next[1]);
}
int main(int argc,const char *argv[]){
	int key=atoi(argv[1]);
	Node* head=NULL;
	head=insert(head,atoi(argv[2]));
	for(int i=3;i<argc;i++){
		insert(head,atoi(argv[i]));
	}
	deletion_one_child(head,key);
	inorder(head);
	return 0;
}
