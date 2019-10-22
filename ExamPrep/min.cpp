#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
void minimum(stack <int> stk){
	stack <int> stk1;
	int min=stk.top();
	stk1.push(min);
	stk.pop();
	while(stk.empty()==false){
	if(stk.top()>stk1.top())
		stk.pop();
	else{
		stk1.pop();
		stk1.push(stk.top());
		stk.pop();
	}
	}
	cout<<stk1.top();
}
int main(int argc,const char *argv[]){
	int n=atoi(argv[1]);
	stack <int> stk;
	for(int i=2;i<argc;i++){
            stk.push(atoi(argv[i]));
	}
	minimum(stk);
	return 0;
}
