#include <iostream>
#include <string.h>
#define CAPACITY 1000
using namespace std;
class MyStack{
	int top;
	public:
        string arr[CAPACITY];

	MyStack(){
		top=-1;
	}

	bool push(string new_element){
		if(top>=CAPACITY-1){
			cout<<"Stack Overflow"<<endl;
			return false;
		}

		arr[++top]=new_element;
		return true;

	}

	string pop(){
		if(top==-1)
			return "$";
		string stack_top_element=arr[top];
		top=top-1;
		return stack_top_element;
	}
	string peek(){
		if(top==-1)
			return "$";
		return arr[top];
	}
	bool isEmpty(){
		if(top==-1)
			return true;
		return false;
	}
	void print_stack(){
		while(top!=-1){
			cout<<arr[top]<<" ";
			top=top-1;
		}
	}
};
int main(int argc,const char *argv[]){
	MyStack *st=new MyStack();
        char arr[argc];
	int k=0;
	bool l;
	for(int i=argc-1;i>=1;i--){
	  st->push(argv[i]); 
	  st->print_stack();
	}
	return 0;
}
