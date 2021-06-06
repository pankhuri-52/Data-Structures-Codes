#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

// #include <bits/stdc++.h>
// using namespace std;

int comp(const void* a, const void* b){
    return *(int*)a > *(int*)b;
}
int findNumberOfTriangles(int arr[], int n){
        qsort(arr,n,sizeof(arr[0]),comp);
        
        int count=0;
        for(int i=0;i<n-2;++i){
            int k=i+2;
            for(int j=i+1;j<n;++j){
                while(k<n && arr[i]+arr[j]>arr[k])
                    ++k;
                    
                if(k>j)
                   count = count + k - j - 1;
            }
        }
        
        return count;
    }



// { Driver Code Starts.

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        printf("%d",findNumberOfTriangles(arr,n));
        printf("\n");
    }
    return 0;
}  // } Driver Code Ends
