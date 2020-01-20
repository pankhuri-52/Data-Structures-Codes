#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string str="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int p=n;
	    int arr[99];
	    int x=0;
	    while(n!=0){
	        arr[x++]=n%62;
	        n=n/62;
	    }
	    for(int i=0,j=x-1;i<x/2;i++,j--){
	        int temp=arr[i];
	        arr[i]=arr[j];
	        arr[j]=temp;
	    }
	    string url="";
	    for(int i=0;i<x;i++){
	        url=url+str[arr[i]];
	    }
	    	cout<<url<<endl;
         	cout<<p<<endl;
	}

	return 0;
}
