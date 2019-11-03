#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
void PostfixToInfix(string str){
	stack <string> stk;
	for(int i=0;i<str.length();i++){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
		string str1=string(1,str[i]);
		stk.push(str1);
		} else{
                  string a=stk.top();
		  stk.pop();
		  string b=stk.top();
		  stk.pop();
		  stk.push('('+b+str[i]+a+')');
	}
     }
	cout<<"Postfix to Infix"<<endl;
	while(!(stk.empty())){
		cout<<stk.top();
		stk.pop();
	}
}
int main(int argc,const char *argv[]){
	string str=argv[1];
	PostfixToInfix(str);
	return 0;
}
