#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
int prec(char c){
	if(c=='^')
		return 3;
	else if(c=='*' || c=='/')
		return 2;
	else if(c=='+' || c=='-')
		return 1;
	else
		return -1;
}
void infixToPrefix(string s){
	stack<char> stk;
	string str;
	stk.push('N');
	for(int i=0;i<s.length();i++){
		if((s[i]>='a' &&  s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
			str=str+s[i];
		else if(s[i]=='(')
			stk.push(s[i]);
		else if(s[i]==')'){
			while(stk.top()!='N' && stk.top()!='('){
			char c=stk.top();
			stk.pop();
			str=str+c;
			}
			if(stk.top()=='('){
				char c=stk.top();
				stk.pop();
			}
		}
		else{
			while(stk.top()!='N' && prec(s[i])<=prec(stk.top())){
				char c=stk.top();
				stk.pop();
				str=str+c;
			}
			stk.push(s[i]);
		}
	}
	while(stk.top()!='N'){
		char c=stk.top();
		stk.pop();
		str=str+c;
	}
	cout<<str<<endl;
	stack <string> stk1;
	for(int i=0;i<str.length();i++){
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
			string str1(1,str[i]);
			stk1.push(str1);
		}
		else{
			string a=stk1.top();
			stk1.pop();
			string b=stk1.top();
			stk1.pop();
			stk1.push(str[i]+b+a);
		}
	}
	cout<<"Infix to Prefix"<<endl;
	while(stk1.empty()==false){
		cout<<stk1.top();
		stk1.pop();
	}
}
int main(int argc,const char *argv[]){
	string str=argv[1];
	infixToPrefix(str);
	return 0;
}
