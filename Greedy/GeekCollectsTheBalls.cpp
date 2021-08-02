// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxBalls(int N, int M, int a[], int b[]){
        int i = 0,j = 0;
        int sum1 = 0, sum2 = 0;
        
        while(i<N && j<M){
            if(a[i] < b[j]){
                sum1 = sum1 + a[i];
                i++;
            }
            else if(a[i] > b[j]){
                sum2 = sum2 + b[j];
                j++;
            } 
            else {
                //when both the elements are equal, first add them to the sum
                sum1 = sum1 + a[i];
                sum2 = sum2 + b[j];
                
                //whosoever sum is greater till now(when the elements have become equal),
                //consider that.
                if(sum1 > sum2)
                    sum2 = sum1;
                else
                    sum1 = sum2;
                    
                i++;
                j++;
            }
        }
        
        //added logic when last element in  arrays are equal
		if(a[i-1] == b[j-1]){
		    if (sum1 > sum2) {
					sum2 = sum1;
				} else {
					sum1 = sum2;
				}
		}
        
        //add remaining elements in the sum
        while(i<N){
            sum1 = sum1 + a[i];
            i++;
        }
        while(j<M){
            sum2 = sum2 + b[j];
            j++;
        }
        
        return sum1 > sum2 ? sum1 : sum2;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        int a[N], b[M];
        for(int i = 0;i < N;i++)
            cin>>a[i];
        for(int i = 0;i < M;i++)
            cin>>b[i];
        
        Solution ob;
        cout<<ob.maxBalls(N, M, a, b)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
