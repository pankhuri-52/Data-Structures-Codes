#include<bits/stdc++.h>
using namespace std;

int minSwaps(int A[], int N);

// Driver program to test the above function
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cout<<minSwaps(a,n)<<endl;
	}
}

// } Driver Code Ends
/* You are required to complete this method */
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int minSwaps(int A[], int N){
   int count=0;
   for(int i=0;i<N-1;i++){
       int j,k;
       for(int j=k=i;j<N;j++){
           if(A[j]<A[k])
           k=j;
       }
       if(k!=i){
           swap(&A[i],&A[k]);
           count++;
       }
   }
  
   return count;
}
