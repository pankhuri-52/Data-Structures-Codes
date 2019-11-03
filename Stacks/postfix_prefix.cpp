#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
void PostfixToPrefix(string str){
	stack<string> stk;
	for(int i=0;i<str.length();i++){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			string str1=string(1,str[i]);
			stk.push(str1);
		}
		else{
			string a=stk.top();
			stk.pop();
			string b=stk.top();
			stk.pop();
			string str2=str[i]+b+a;
			stk.push(str2);
		}
	}
	cout<<"Postfix to Prefix"<<endl;
	while(!(stk.empty())){
		cout<<stk.top();
		stk.pop();
	}
}
int main(int argc,const char *argv[]){
    string expression="ABC-DF-*+";
    PostfixToPrefix(expression);
    return 0;
}
