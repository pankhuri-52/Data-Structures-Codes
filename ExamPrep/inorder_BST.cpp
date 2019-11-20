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
Node* new_node(int value){
	Node* node=new Node(value);
	return node;
}
Node* insert(Node* root,int value){
	if(root==NULL)
		return new_node(value);
	if(value>root->data)
		root->next[1]=insert(root->next[1],value);
	if(value<root->data)
		root->next[0]=insert(root->next[0],value);
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
	Node* head=NULL;
	head=insert(head,atoi(argv[1]));
	for(int i=2;i<argc;i++){
		insert(head,atoi(argv[i]));
	}
	inorder(head);
	return 0;
}
