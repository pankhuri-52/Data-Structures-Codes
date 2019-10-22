#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
void reverse(string str){
	int n=str.length();
	char char_array[n+1];
	strcpy(char_array,str.c_str());
	stack <char> stk;
	for(int i=0;i<n;i++){
		stk.push(char_array[i]);
	}
	while(stk.empty()==false){
		cout<<stk.top();
		stk.pop();
	}
}
int main(int argc,const char *argv[]){
	string str=argv[1];
	reverse(str);
	return 0;
}
