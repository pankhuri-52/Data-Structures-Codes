#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
	    scanf("%d",&arr[i]);
    }
    int sum;
    int max=arr[0];
    for(int i=0;i<n;i++){
	    for(int j=i;j<=n;j++){
		      sum=0;
		    for(int k=i;k<j;k++){
                         sum=sum+arr[k];
			 if(max<sum){
				 max=sum;
			 }
		    } 
	    }
    }
    printf("%d",max);
    return 0;
}
