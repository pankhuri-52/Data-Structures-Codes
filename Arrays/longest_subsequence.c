#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define maxN 20 
#define maxM 64 
 
int dp[maxN][maxM]; 
bool v[maxN][maxM]; 

int max(int a,int b){
    if(a>b)
      return a;
    else
       return b;
}
  
int findLen(int* arr, int i, int curr, 
            int n, int m) 
{  
    if (i == n) { 
        if (!curr) 
            return 0; 
        else
            return -1; 
    }  
    if (v[i][curr]) 
        return dp[i][curr]; 
    v[i][curr] = 1; 

    int l = findLen(arr, i + 1, curr, n, m); 
    int r = findLen(arr, i + 1, 
                    (curr + arr[i]) % m, n, m); 
    dp[i][curr] = l; 
    if (r != -1) 
        dp[i][curr] = max(dp[i][curr], r + 1); 
    return dp[i][curr]; 
} 
  
 
int main(int argc,const char *argv[]) 
{ 
    int arr[argc];
    int k=0;
    int m=atoi(argv[1]); 
    for(int i=2;i<argc;i++){
        arr[k++]=atoi(argv[i]);
    }
    int f=findLen(arr, 0, 0, k, m); 
    printf("%d",f);
    return 0; 
} 
