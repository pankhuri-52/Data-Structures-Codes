#include<bits/stdc++.h>
using namespace std;
int findExtra(int a[],int b[],int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n-1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			cin>>b[i];
		}
		cout<<findExtra(a,b,n)<<endl;
	}
}
/*This is a function problem.You only need to complete the function given below*/
/*Complete the function below*/
int findExtra(int a[],int b[],int n)
{
    int index;
    int flag=0;
  for(int i=0,j=0;i<n-1,j<n-1;i++,j++){
          if(a[i]!=b[j]){
          index=i;
          flag=1;
          break;
          }
  }
  if(flag==1)
  return index;
  if(flag==0)
  return n-1;
}
