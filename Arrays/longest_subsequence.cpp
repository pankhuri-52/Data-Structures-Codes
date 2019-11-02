#include <iostream>
#include<bits/stdc++.h>
using namespace std;
  
void printSubsequences(int arr[], int n,int m) 
{ 
    unsigned int opsize = pow(2, n); 
    int sum;
    int count;
    int flag=0;
    for (int i = 1; i < opsize; i++) 
    {   
        sum=0,count=0;
        for (int j = 0; j < n; j++) 
        { 
            if (i & (1<<j)){ 
		    count++;
                sum=sum+arr[j];
	    }
        } 
       if(sum==m)
	   flag=1;
       else
	       flag=0;
    } 
    if(flag==1)
	    cout<<count;
    else
	    cout<<"0";
} 
int main(int argc,const char *argv[]) 
{ 
    int arr[argc];
    int k=0;
    int m=atoi(argv[1]);
    for(int i=2;i<argc;i++){
	    arr[k++]=atoi(argv[i]);
    }
    printSubsequences(arr,k,m); 
    return 0; 
} 

