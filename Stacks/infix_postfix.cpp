#include<bits/stdc++.h>
#include <string.h>
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
void InfixToPostfix(string s){
	std::stack <char> st;
	st.push('N');
	string final_string;
	for(int i=0;i<s.length();i++){
          //for uppercase and lowercase alphabets
	   if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
		   final_string=final_string+s[i];
	   }
	  //starting bracket
	   else if(s[i]=='('){
		   st.push(s[i]);
	   }
	  //ending bracket
	   else if(s[i]==')'){
		   while(st.top()!='N' && st.top()!='('){
			   char c=st.top();
			   st.pop();
			   final_string=final_string+c;
		   }
		   if(st.top()=='('){
			   char c=st.top();
			   st.pop();
		   }
	   }
	  //precedence of operators
	   else{
		   while(st.top()!='N' && prec(s[i])<=prec(st.top())){
                      char c=st.top();
		      st.pop();
		      final_string=final_string+c;
	   }
	  st.push(s[i]); 
	}
    }
    while(st.top()!='N'){
       char c=st.top();
       st.pop();
       final_string=final_string+c;
    }
    cout<<final_string<<endl;
}
int main(){
	//string expression=argv[1];
	string expression="a+b*(c^d-e)^(f+g*h)-i";
	InfixToPostfix(expression);
	return 0;
}

