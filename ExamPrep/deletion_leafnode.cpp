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
Node* delete_node(Node* root,int value){
	//cout<<"Hii"<<endl;
	if(root==NULL)
		return NULL;
	root->next[0]=delete_node(root->next[0],value);
	root->next[1]=delete_node(root->next[1],value);
	if(root->data==value && root->next[0]==NULL && root->next[1]==NULL){
		delete(root);
		return NULL;
	}
	return root;
}
Node* insert(Node* head,int value){
	if(head==NULL)
		return NULL;
	if(value>head->data)
		head->next[1]=insert(head->next[1],value);
	if(value<head->data)
		head->next[0]=insert(head->next[0],value);
	return head;
}
void inorder(Node* root){
	//cout<<"Bie"<<endl;
	if(root==NULL)
		return;
	inorder(root->next[0]);
	cout<<root->data<<" ";
	inorder(root->next[1]);
}
int main(int argc,const char *argv[]){
	Node* head=insert(head,atoi(argv[1]));
	for(int i=2;i<argc;i++){
             insert(head,atoi(argv[i]));
	}
	//cout<<"Hello"<<endl;
	delete_node(head,6);
	inorder(head);
	return 0;
}
