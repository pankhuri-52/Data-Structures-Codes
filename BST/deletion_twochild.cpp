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

Node* minValueNode(Node* node){
	Node* current=node;
	while(current->next[0]!=NULL)
		current=current->next[0];
	return current;
}
Node* insert(Node* root,int value){
	if(root==NULL)
		return new Node(value);
	if(value<root->data)
		root->next[0]=insert(root->next[0],value);
	if(value>root->data)
		root->next[1]=insert(root->next[1],value);
	return root;
}
Node* delete_twoChild(Node* root,int key){
	if(root==NULL)
		return NULL;
	if(key>root->data)
		root->next[1]=delete_twoChild(root->next[1],key);
	else if(key<root->data)
		root->next[0]=delete_twoChild(root->next[0],key);
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
               Node* temp=minValueNode(root->next[1]);
	       root->data=temp->data;
	       root->next[1]=delete_twoChild(root->next[1],temp->data);
	}
	return root;
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
	Node* head=insert(head,atoi(argv[2]));
	for(int i=3;i<argc;i++){
		insert(head,atoi(argv[i]));
	}
	delete_twoChild(head,key);
	inorder(head);
	return 0;
}
