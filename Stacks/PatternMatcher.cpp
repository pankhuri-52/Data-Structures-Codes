//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
void follPatt(string );
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    follPatt(s);
	   
	}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
void follPatt(string s)
{
	 int flag=0;
	 int flag1=0;
    stack <char> stk;
   for(int i=0;i<s.length();i++){
       if(s[i]=='x'){
	       if(flag1==1){
		       if(stk.empty()==false){
			       flag1=2;
			       break;
		       }
	       }
	       flag1=0;
         stk.push(s[i]);
       }
       if(s[i]=='y')
       {
           if(stk.empty()==true){
               flag=1;
               break;
           } else{
            flag1=1;
         stk.pop();
	   }
       }
   }
   if((stk.empty()==true) && (flag!=1))
     cout<<"1"<<endl;
     else if(flag1==2)
	cout<<"0"<<endl;
     else
     cout<<"0"<<endl;
}
