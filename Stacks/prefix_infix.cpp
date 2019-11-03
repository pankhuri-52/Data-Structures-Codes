#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
void PrefixToInfix(string str){
	stack <string> stk;
	for(int i=str.length()-1;i>=0;i--){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			string str1=string(1,str[i]);
			stk.push(str1);
		}
		else{
			string a=stk.top();
			stk.pop();
			string b=stk.top();
			stk.pop();
			stk.push('('+a+str[i]+b+')');
		}
	}
	cout<<"Prefix to Infix"<<endl;
	while(!(stk.empty())){
		cout<<stk.top();
		stk.pop();
	}
}
int main(int argc,const char *argv[]){
	string str=argv[1];
	PrefixToInfix(str);
	return 0;
}
