#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
void anagram(string s,string match){
    int count=0;
//   sort(s.begin(),s.end());
   sort(match.begin(),match.end());
   for(int i=0;i<=s.length()-match.length();i++){
       string str=s.substr(i,match.length());
       sort(str.begin(),str.end());
       if(str==match)
       count++;
   }
   cout<<count<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t!=0){
	   string str;
	   cin>>str;
	   string match;
	   cin>>match;
	   anagram(str,match);
	    t--;
	}
	return 0;
}
