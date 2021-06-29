// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void printPath(int i,int j,vector<vector<int>> &m,int n,
    string s,vector<string> &res){
        
    //checking for base case i.e. if these given constraints didn't pass, return
    //also return, when the rat had travelled through the same path before
    if(i<0 or j<0 or i>=n or j>=n or m[i][j]==0 or m[i][j]==100 ) {
        return ;
        
    //if the rat has reached the destination, push the destination string to the result 
    // and return
    }else if(i==n-1 and j==n-1){
        res.push_back(s);
        return ;
        
    //now since the path been taken by rat, mark it as visited, i.e. 100
    // and put the direction in the string s
    }else{
        m[i][j]=100;
        printPath(i+1,j,m,n,s+'D',res);
        printPath(i-1,j,m,n,s+'U',res);
        printPath(i,j+1,m,n,s+'R',res);
        printPath(i,j-1,m,n,s+'L',res);
        m[i][j]=1;
    }
}
    vector<string> findPath(vector<vector<int>> &m, int n) {
       vector<string> res;
        printPath(0,0,m,n,"",res);
        sort(res.begin(),res.end());
        return res; 
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends