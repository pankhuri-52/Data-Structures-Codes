#include <stdio.h>
#include <stdlib.h>
void sum_of_array(int arr[],int n){
    int sum=0;
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(abs(arr[j]-arr[i])>1)
             sum=sum+(arr[j]-arr[i]);
           else if(abs(arr[j]-arr[i])<=1)
             sum=sum+0;
       }
   }
   printf("%d\n",sum);
}

int main() {
	
	int t;
	scanf("%d",&t);
	while(t!=0){
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	    }
	    sum_of_array(arr,n);
	    t--;
	}
	return 0;
}
