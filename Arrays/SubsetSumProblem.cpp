// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        int temp_sum=0;
        int sub;
        vector<int> vect;
        
        for(int i=0;i<N;i++){
            vect.push_back(arr[i]);
            temp_sum = temp_sum + arr[i];
            
            if(temp_sum == sum){
                return true;
            }
            
            else if(temp_sum > sum){
                sub = temp_sum - sum;
                if(find(vect.begin(), vect.end(), sub) != vect.end()){
                    return true;
                } else {
                    temp_sum = temp_sum - arr[i];
                }
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
