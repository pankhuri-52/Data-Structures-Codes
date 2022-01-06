// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        int mi = INT_MAX;
        string first = arr[0];
        
        for(int i=1; i<N; i++) {
            int j = 0;
            int k = 0;
            int length = 0;
            
            while(j<first.size() and k<arr[i].size()){
                
                if(first[j] == arr[i][k]) length++;
                else break;
                
                j++;
                k++;
            }
            
         mi = min(mi,length);
            
        }
        
        if(mi == 0) return "-1";
        return first.substr(0,mi);
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends
