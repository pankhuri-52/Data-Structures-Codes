#include <iostream>
#include <string.h>
#define CAPACITY 1000
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
class MyStack{
	Node* top=NULL;
	public:
	   MyStack(){
	   }
         bool push(int new_element){
		 Node* new_node=new Node;
		 new_node->data=new_element;
		 new_node->next=top;
		 top=new_node;
		 return true;
	 }
	 void print_stack(){
		 while(top!=NULL){
			 cout<<top->data;
			 top=top->next;
		 }
	 }
	 void reverse_stack(){
		 Node* prev=NULL;
		 Node* current=top;
		 Node* Next=NULL;
                 while(current!=NULL){
			 Next=current->next;
			 current->next=prev;
			 prev=current;
			 current=Next;
		 }
		 top=prev;
	 }
};
int main(int argc,const char *argv[]){
	MyStack *st=new MyStack();
	for(int i=argc-1;i>=1;i--){
		st->push(atoi(argv[i]));
	}
	cout<<"After reversing the stack, the output becomes:\n";
	st->reverse_stack();
	st->print_stack();
	return 0;
}
