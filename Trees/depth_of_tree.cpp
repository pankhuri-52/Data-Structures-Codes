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
int max_depth(Node* node1){
	if(node1==NULL)
		return 0;
	int left=max_depth(node1->next[0]);
	int right=max_depth(node1->next[1]);
	if(left>right)
		return (left+1);
	else
		return (right+1);
}
void print_tree(Node* node1){
	if(node1==NULL)
		return;
	cout<<node1->data<<" ";
	print_tree(node1->next[0]);
	print_tree(node1->next[1]);
}
int main(int argc,const char *argv[]){
	Node* node1=new Node(1);
	node1->next[0]=new Node(2);
	node1->next[1]=new Node(3);
	node1->next[0]->next[0]=new Node(4);
	node1->next[0]->next[1]=new Node(5);
	print_tree(node1);
	int max=max_depth(node1);
		cout<<endl<<max<<endl;
	return 0;
}
