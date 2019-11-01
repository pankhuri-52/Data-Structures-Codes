#include <iostream>
#include <string.h>
using namespace std;
class Node{
	public:
	int data;
	Node* next[2];
	Node(int data){
		this->data=data;
	}
};
int height(Node* root){
	if(root==NULL)
		return 0;
	int l=height(root->next[0]);
	int r=height(root->next[1]);
	if(l>r)
		return (l+1);
	else
		return (r+1);
}
void print_nodes(Node* root,int level){
	if(root==NULL)
		return;
	else if(level==1)
		cout<<root->data<<" ";
	else{
		print_nodes(root->next[0],level-1);
		print_nodes(root->next[1],level-1);
	}
}
void traversing_down(Node* root){
	int h=height(root);
	for(int i=1;i<=h;i++)
		print_nodes(root,i);
}
int main(int argc,const char *argv[]){
    Node* root=new Node(1);
    root->next[0]=new Node(2);
    root->next[1]=new Node(3);
    root->next[0]->next[0]=new Node(4);
    root->next[0]->next[1]=new Node(5);
    root->next[1]->next[0]=new Node(6);
    root->next[1]->next[1]=new Node(7);
    root->next[0]->next[0]->next[0]=new Node(8);
    root->next[0]->next[0]->next[1]=new Node(9);
    traversing_down(root);
    return 0;
}
