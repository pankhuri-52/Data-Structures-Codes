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
void InfixToPrefix(string s){  
       stack <char> st;
       stack <string> st1;
       st.push('N');
       string str;
       string str1;
       for(int i=0;i<s.length();i++){
	       if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
		       str=str+s[i];
	       }
	       else if(s[i]=='('){
		       st.push(s[i]);
	       }
	       else if(s[i]==')'){
		      while(st.top()!='N' && st.top()!='('){
			      char c=st.top();
			      st.pop();
			      str=str+c;
		      }
		      if(st.top()=='('){
			      char c=st.top();
			      st.pop();
		      }
	       }
	       else{
		       while(st.top()!='N' && prec(s[i])<=prec(st.top())){
			       char c=st.top();
			       st.pop();
			       str=str+c;
		       }
		       st.push(s[i]);
	       }
       }
       while(st.top()!='N'){
	       char c=st.top();
	       st.pop();
	       str=str+c;
       }
       cout<<"After evaluating infix to postfix"<<endl;
       cout<<str<<endl;
       for(int i=0;i<str.length();i++){
	       if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
		       string str1(1,str[i]);
		       st1.push(str1);
	       }
	       else{
		       string a=st1.top();
		       st1.pop();
		       string b=st1.top();
		       st1.pop();
		       string str2=str[i]+b+a;
		       st1.push(str2);
	       }
       }
       cout<<"After evaluating infix to prefix"<<endl;
       while(!(st1.empty())){
	       cout<<st1.top();
	       st1.pop();
       }
       
}
int main(int argc,const char *argv[]){
    string expression="A*B+C/D";
    InfixToPrefix(expression);
    return 0;
}
