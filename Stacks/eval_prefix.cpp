#include <iostream>
#include <stack>
#include <string>
using namespace std;
void EvaluatePrefix(string str){
	stack<int>stk;
	for(int i=str.length()-1;i>=0;i--){
		if(str[i]>='1' && str[i]<='9'){
			stk.push((str[i]-'0'));
		} else {
			int a=stk.top();
			stk.pop();
			int b=stk.top();
			stk.pop();
			switch(str[i]){
				case '+':
					stk.push(a+b);
					break;
				case '-':
					stk.push(a-b);
					break;
				case '*':
					stk.push(a*b);
					break;
				case '/':
					stk.push(a/b);
					break;
			}
		}
	}
	while(!(stk.empty())){
		cout<<stk.top();
		stk.pop();
	}
}
int main(int argc,const char *argv[]){
	string str=argv[1];
	EvaluatePrefix(str);
	return 0;
}
