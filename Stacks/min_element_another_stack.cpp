#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
void min_element(stack <int> stk){
	stack <int> temp_stack;
	int a=stk.top();
	stk.pop();
	temp_stack.push(a);
	while(stk.empty()==false){
		if(stk.top()<=temp_stack.top()){
                     temp_stack.pop();
		     int b=stk.top();
		     stk.pop();
		     temp_stack.push(b);
		}
		else{
			stk.pop();
		}
	}
	cout<<"The minimum element is "<<temp_stack.top()<<endl;
}
int main(int argc,const char *argv[]){
	stack <int> stk;
	for(int i=argc-1;i>=1;i--){
		stk.push(atoi(argv[i]));
	}
	min_element(stk);
	return 0;
}
