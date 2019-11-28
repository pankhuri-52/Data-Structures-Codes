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
Node* new_Node(int value){
	Node* node=new Node(value);
	return node;
}
Node* insert(Node* head,int value){
	if(head==NULL)
		return new_Node(value);
        if(value<head->data)
		head->next[0]=insert(head->next[0],value);
	if(value>head->data)
		head->next[1]=insert(head->next[1],value);
	return head;
}
void inorder(Node* root){
	if(root==NULL)
		return;
	inorder(root->next[0]);
	cout<<root->data<<" ";
	inorder(root->next[1]);
}
void calculate(Node* root,int *sum){
	if(root==NULL)
		return;
	calculate(root->next[1],sum);
	*sum=*sum+root->data;
        root->data=*sum-root->data;
	calculate(root->next[0],sum);
}
void greater_sum(Node* root){
	int sum = 0;
        calculate(root, &sum);
}
int main(int argc,const char *argv[]){
	int sum=0;
	Node* head=NULL;
	head=insert(head,atoi(argv[1]));
	for(int i=2;i<argc;i++){
		insert(head,atoi(argv[i]));
	}
	inorder(head);
	cout<<endl;
	greater_sum(head);
	inorder(head);
	return 0;
}
