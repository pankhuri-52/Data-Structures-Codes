#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
void ReverseString(string str){
	stack<char>stk;
	for(int i=0;i<str.length();i++){
		stk.push(str[i]);
	}
	while(!(stk.empty())){
		cout<<stk.top();
		stk.pop();
	}
	cout<<endl;
}
int main(int argc,const char *argv[]){
	string str[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		str[k++]=argv[i];
	}
	for(int i=0;i<k;i++){
		ReverseString(str[i]);
	}
	return 0;
}
