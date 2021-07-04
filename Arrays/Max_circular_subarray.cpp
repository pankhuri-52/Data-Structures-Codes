// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        int max_straight_sum = INT_MIN;
        int temp_max_sum = 0;
        int arr_sum = 0;
        int min_straight_sum = INT_MAX;
        int temp_min_sum = 0;
        
        for(int i=0;i<num;i++){
            
            temp_max_sum = temp_max_sum + arr[i];
            if(temp_max_sum > max_straight_sum){
                max_straight_sum = temp_max_sum;
            }
            temp_max_sum = temp_max_sum < 0 ? 0 : temp_max_sum;
            
            arr_sum = arr_sum + arr[i];
            
            temp_min_sum = temp_min_sum + arr[i];
            if(temp_min_sum < min_straight_sum){
                min_straight_sum = temp_min_sum;
            }
            
            temp_min_sum = temp_min_sum > 0 ? 0 : temp_min_sum;
        }
        
        // if all the elements are negative
        if(arr_sum == min_straight_sum){
            return max_straight_sum;
        }
        
        return max(max_straight_sum, arr_sum - min_straight_sum);
        
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
