//Approach:
//1. Sort both the arrays and iterate one with i and another with j
//2. Compare the arrival and departures and increase and descrease accordingly.

// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    
    int findPlatform(int arr[], int dep[], int n)
    {
    	 //We will sort both arr and dep separately
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int platform_Needed = 1;
    	int result = 1;
    	int i=1,j=0;
    	
    	while(i<n && j<n){
    	    //In this case there is a train at the platform
    	    //So we will need a new platform
    	    if(arr[i]<=dep[j]){
    	        
    	        //we need a platform
    	        platform_Needed++;
    	        //we move to next arrival train
    	        i++;
    	        
    	    }
    	    //In this case there is no train at one of the previous platform
    	    //required
    	    //So we will decrease the platform
    	    else if(arr[i]>dep[j]){
    	        platform_Needed--;
    	        //Move the departure time pointer further
    	        j++;
    	    }
    	    
    	    result = max(result,platform_Needed);
    	}
    	
    	return result;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends
