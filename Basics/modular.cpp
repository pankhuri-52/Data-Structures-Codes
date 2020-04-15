#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void modular(long long int a,long long int b,long long int c){
   int result=1;
   while(b--){
       result=(result*a)%c;
   }
   cout<<result<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int a,b,c;
	    cin>>a>>b>>c;
	    modular(a,b,c);
	}
	return 0;
}
