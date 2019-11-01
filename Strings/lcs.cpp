#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string str1,str2;
	string str3[99];
	string str4[99];
	int x=0;
	int k=0;
	cout<<"Enter the first string"<<endl;
	cin>>str1;
	cout<<"Enter the second string"<<endl;
	cin>>str2;
	cout<<"The common substrings are"<<endl;
	for(int i=0;i<str1.length();i++){
		for(int j=1;j<=str1.length()-i;j++){
			str3[k++]=str1.substr(i,j);
		}
	}
	for(int i=0;i<str2.length();i++){
		for(int j=1;j<=str2.length()-i;j++){
			str4[x++]=str2.substr(i,j);
		}
	}
	int max=0;
	int index;
	for(int i=0;i<k;i++){
		for(int j=0;j<x;j++){
			if(str3[i]==str4[j]){
				int n=str3[i].length();
				if(max<n){
				  max=n;
				  index=i;
				}
			}
		}
	}
	for(int i=0;i<k;i++){
		if(i==index)
			cout<<str3[i]<<" ";
	}
	return 0;
}
