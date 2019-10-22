#include <iostream>
#include <string.h>
using namespace std;
class Node{
	public:
		string data;
		Node* next;
};
class MyStack{
	Node* top=NULL;
	public:
	MyStack(){
	}
	bool push(string new_data){
		Node* new_node=new Node;
		new_node->data=new_data;
		new_node->next=top;
		top=new_node;
		return true;
	}
	string pop(){
		if(top==NULL)
			return "$";
		string head_data=top->data;
		top=top->next;
		return head_data;
	}
	string peek(){
		if(top==NULL)
			return "$";
		string peek_data=top->data;
		return peek_data;
	}
	bool isEmpty(){
		if(top==NULL)
			return true;
		else 
			return false;
	}
	void print_stack(){
		while(top!=NULL){
			cout<<top->data<<" ";
			top=top->next;
		}
	}
};
int main(int argc,const char *argv[]){
     MyStack *st=new MyStack();
     for(int i=argc-1;i>=1;i--){
	     st->push(argv[i]);
     }
     st->print_stack();
     return 0;
}
