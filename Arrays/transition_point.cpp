#include<bits/stdc++.h>
using namespace std;
int transitionPoint(int arr[],int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<transitionPoint(a,n)<<endl;
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
int transitionPoint(int arr[],int n)
{
    int index;
   for(int i=0;i<n;i++){
       if(arr[i]==1 && arr[i-1]==0)
        index=i;
   }
   return index;
}
