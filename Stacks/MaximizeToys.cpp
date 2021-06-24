// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        int sum=0;
        int count=0;
        sort(arr.begin(), arr.end(), greater <>());
        stack<int> stk;
        for(int i=0;i<arr.size();i++){
            stk.push(arr[i]);
        }
        
        if(stk.empty() == true)
            return -1;
        else {
            while(stk.empty()== false){
                
                int top_element = stk.top();
                sum = sum + stk.top();
                
                if(sum > K){
                    sum = sum - stk.top();
                    stk.pop();
                }
                
                else if(sum < K){
                    count++;
                    stk.pop();
                }
                
                else if(sum == K){
                    count++;
                    stk.pop();
                }
            }
            return count;
            
        }
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends
