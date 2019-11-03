#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
void balance_parenthesis(string str){
	stack <char> stk;
	for(int i=0;i<str.length();i++){
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
			stk.push(str[i]);
		if(str[i]==')' || str[i]=='}' || str[i]==']')
			stk.pop();
	}
	if(stk.empty()==true)
		cout<<"Yes"<<endl;
	if(stk.empty()==false)
		cout<<"No"<<endl;
}
int main(){
	//string str=argv[1];
	string str="A+(B-C*(D+F))";
	balance_parenthesis(str);
	return 0;
}
