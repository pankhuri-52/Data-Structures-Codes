#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
stack <int> sort_stack(stack <int> &stk){
	stack <int> temp_stack;
	while(!(stk.empty())){
		int temp=stk.top();
		stk.pop();
		while( !(temp_stack.empty()) && temp_stack.top()>temp){
			stk.push(temp_stack.top());
                         temp_stack.pop();
		}
		temp_stack.push(temp);
	}
	return temp_stack;
}
int main(int argc,const char *argv[]){
	stack<int> stk;
	for(int i=argc-1;i>=1;i--){
		stk.push(atoi(argv[i]));
	}
	stack <int> temp_stack=sort_stack(stk);
	cout<<"After sorting the stack:"<<endl;
	while(!(temp_stack.empty())){
		cout<<temp_stack.top();
		temp_stack.pop();
	}
	return 0;
}
