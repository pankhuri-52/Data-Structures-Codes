#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
      /* lets do this problem using dynamic programming
         approach
         we are gonna take a matrix d[][] and we are gonna put the two strings
         vertically and horizontally.
         1. Now if the two characters from the 2 strings are different, put zero.
         2. If the 2 characters are matching, add 1 to the diagonal numbers
         3. Now get the maximum number in the whole matrix
         YIPEE!!, Problem solved */
         
         vector<vector<int>> dp(n+1, vector<int>(m+1));
         
         int res = 0;
         for(int i=0;i<=n;i++){
             for(int j=0;j<=m;j++){
                 if(i==0 || j==0 || S1[i-1]!=S2[j-1])
                    dp[i][j]=0;
                 else
                    res = max(res, dp[i][j] = 1+dp[i-1][j-1]);
             }
         }
         
         return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
