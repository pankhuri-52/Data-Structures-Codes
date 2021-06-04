// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       vector<long long int> answer;
       
       if(n==1)
       return {1}; 
       
       long long int prod=1;
       for(int i=0;i<n;i++){
           prod = prod*nums[i];
           answer.push_back(prod);
       }
       
       answer[n-1] = answer[n-2];
       prod=nums[n-1];
       for(int i=n-2;i>=1;i--){
           answer[i] = prod*answer[i-1];
           prod = prod*nums[i];
       }
       answer[0] = prod;
       
       return answer;
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends
