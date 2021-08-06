// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    int bellNumber(int n)
    {
        //bell(2) = summation(from k=1 to k=n) S(n,k)
        //e.g.    = S(2,1) + S(2,2) = 1 + 1 = 2
        //S(n+1,k) = k*S(n,k) + S(n,k-1)
        //if (j==0) Bell(i,j) = Bell(i-1, j-1)
        // else Bell(i,j) = Bell(i-1,j-1) + Bell(i,j-1)
        //this if else should work until i == j
        long long dp[n+1][n+1];
        dp[1][1]=1;
       
       long long MOD = 1000000007;
       
       for(int i=2;i<=n;i++) {
           
           dp[i][1]=dp[i-1][i-1];
           
           for(int j=2;j<=i;j++) {
               
               dp[i][j] = ((dp[i][j-1]%MOD)+(dp[i-1][j-1]%MOD))%MOD;
               
           }
           
       }
       
       return dp[n][n];
    }
};


// { Driver Code Starts.



int main()
{
    Solution obj;
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<obj.bellNumber(n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
