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
void postorder(Node* root){
	if(root==NULL)
		return;
	//cout<<root->data<<" ";
	postorder(root->next[0]);
	postorder(root->next[1]);
	cout<<root->data<<" ";
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
      postorder(root);
      return 0;
}
