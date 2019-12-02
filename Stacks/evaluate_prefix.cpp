#include <iostream>
#include <stack>
#include <string>
void evaluate_prefix(string str){
	stack<char>stk;
	for(int i=strlen(str)-1;i>=0;i--){
		if(str[i]>='1' && str[i]<='9'){
			stk.push(str[i]-'0');
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
}
using namespace std;
int main(int argc,const char *argv[]){
	string str=argv[1];
	evaluate_prefix(str);
	return 0;
}
