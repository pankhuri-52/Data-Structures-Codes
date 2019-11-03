#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
void insert_Stack(stack <int> &stk,int key){
	while( stk.empty() || key>stk.top() ){
		stk.push(key);
		return;
	}
	int top=stk.top();
	stk.pop();
	insert_Stack(stk,key);
	stk.push(top);
}
void SortStack(stack <int> &stk){
	if(stk.empty())
		return;
	int key=stk.top();
	stk.pop();
	SortStack(stk);
	insert_Stack(stk,key);
}
void print_stack(stack <int> stk){
	while(!(stk.empty())){
		cout<<stk.top();
		stk.pop();
	}
}
int main(int argc,const char *argv[]){
	stack <int> stk;
	for(int i=argc-1;i>=1;i--){
               stk.push(atoi(argv[i]));
	}
	cout<<"After sorting the sorting recursively"<<endl;
	SortStack(stk);
	print_stack(stk);
	return 0;
}
