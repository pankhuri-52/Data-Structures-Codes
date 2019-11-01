#include <iostream>
#include <string.h>
using namespace std;
class Node{
	public:
     int data;
     Node* next[2];
	public:
           Node(int data){
	      this->data=data;
	    // next[0]=next[1]=NULL;
     }
};
void print_tree(Node* head){
	if(head==NULL)
		return;
		cout<<head->data<<" ";
		print_tree(head->next[0]);
		print_tree(head->next[1]);
}
int main(int argc,const char *argv[]){
	/*Node *node1=new Node(1);
	Node *node2=new Node(2);
	Node *node3=new Node(3);
	Node *node4=new Node(4);
	Node *node5=new Node(5);
	//node1->data=1;
	//node2->data=2;
	//node3->data=3;
	//node4->data=4;
	//node5->data=5;
	node1->next[0]=node2;
	node1->next[1]=node3;
	node2->next[0]=node4;
	node2->next[1]=node5;
	node4->next[0]=NULL;
	node4->next[1]=NULL;
	node5->next[0]=NULL;
	node5->next[1]=NULL;
	node3->next[0]=NULL;
	node3->next[1]=NULL;
	print_tree(node1);*/

	Node *node1=new Node(1);
	node1->next[0]=new Node(2);
	node1->next[1]=new Node(3);
	node1->next[0]->next[0]=new Node(4);
	node1->next[0]->next[1]=new Node(5);
	print_tree(node1);
	return 0;
}
