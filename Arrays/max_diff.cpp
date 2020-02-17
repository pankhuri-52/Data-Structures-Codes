// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int maxDistance(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<maxDistance(arr,n)<<endl;
    }
    return 0;
}// } Driver Code Ends
// your task is to complete this function
#include <map>
#include <algorithm>
int mini(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}
int maxi(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int maxDistance(int arr[], int n)
{
   map<int,int> min;
   map<int,int> max;
   map<int,int> first;
   int start = arr[0];
   first[arr[0]] = 0;
   for(int i=1;i<n;i++){
       if(arr[i] == start){
           continue;
       }
       if(first[arr[i]] == 0){
           first[arr[i]] = i;
       }
   }
   
  for(int i=0;i<n;i++){
      min[arr[i]]=mini(first[arr[i]],i);
       
      max[arr[i]]=maxi(max[arr[i]],i);
  }
  map<int,int>::iterator itr;
  map<int,int>::iterator itr1;
  int temp=0;
  for(itr=max.begin(),itr1=min.begin();itr!=max.end(),itr1!=min.end();itr++,itr1++){
      if((itr->second)-(itr1->second)>temp){
          
          temp=(itr->second)-(itr1->second);
      }
  }
   return temp;
}

