#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
void PrefixToPostfix(string str){
	stack <string> stk;
	for(int i=str.length()-1;i>=0;i--){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
			string str1=string(1,str[i]);
			stk.push(str1);
		} else {
			string a=stk.top();
			stk.pop();
			string b=stk.top();
			stk.pop();
			stk.push(a+b+str[i]);
		}
	}
	cout<<"Prefix to Postfix"<<endl;
	while(!(stk.empty())){
		cout<<stk.top();
		stk.pop();
	}
}
int main(int argc,const char *argv[]){
	string str=argv[1];
	PrefixToPostfix(str);
	return 0;
}
