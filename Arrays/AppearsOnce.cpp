#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //approach is if same elements will come, it will mark res as 0
	    // because 1^1 = 0 so whenever a single element come, it will store it
	    //in res and return it
	    int res = 0;
    
        for(int i = 0; i < N; i++)
            res = res ^ A[i];
    
        return res;
	}
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
  // } Driver Code Ends
