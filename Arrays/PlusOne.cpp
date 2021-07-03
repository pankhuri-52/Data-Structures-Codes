#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
       vector<int> result;
       
       int sum = (arr[N-1] + 1)%10;
       int carry = (arr[N-1] +1)/10;
       
       result.push_back(sum);
       
       for(int i=N-2; i>=0; i--){
           sum = (arr[i] + carry)%10;
           carry = (arr[i] + carry)/10;
           
           result.push_back(sum);
       }
       
       if(carry!=0){
           result.push_back(carry);
       }
       reverse(result.begin(),result.end());
       
       return result;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
