#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
void postfix_infix(string str){
	stack <string> stk;
	for(int i=0;i<str.length();i++){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
		string str1=string(1,str[i]);
		stk.push(str1);
		} else {
			string a=stk.top();
			stk.pop();
			string b=stk.top();
			stk.pop();
			string str2=string('('+b+str[i]+a+')');
			stk.push(str2);
		}
	}
	while(stk.empty()==false){
		cout<<stk.top();
		stk.pop();
	}
}
int main(int argc,const char *argv[]){
	string str=argv[1];
	postfix_infix(str);
	return 0;
}
