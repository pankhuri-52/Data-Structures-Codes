#include <iostream>
#include <stack>
using namespace std;
bool balancing(string str){
	stack<char>stk;
	char x;
	for(int i=0;i<str.length();i++){
		if(str[i]=='1' || str[i]=='2' || str[i]=='3'){
			stk.push(str[i]);
			continue;
		}
		if(stk.empty())
			return false;

		switch(str[i]){
                   case '9':
			   x=stk.top();
			   stk.pop();
			   if(x=='2' || x=='3')
			     return false;
			   break;
	          
	           case '8':
			   x=stk.top();
			   stk.pop();
			   if(x=='1' || x=='3')
				   return false;
			   break;

		   case '7':
			   x=stk.top();
			   stk.pop();
			   if(x=='1' || x=='2')
				   return false;
			   break;
		}
	}
	return (stk.empty());
}
int main(int argc,const char *argv[]){
	string str=argv[1];
	if(balancing(str)==true)
		cout<<"Balanced";
	else
		cout<<"Unbalanced";
	return 0;
}
