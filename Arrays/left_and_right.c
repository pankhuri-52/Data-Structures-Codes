#include <stdio.h>

void left_and_right(int arr[],int n){
    int mid=0+(n-0)/2;
    int sum=0;
    int sum1=0;
    for(int i=0;i<mid;i++){
        sum=sum+arr[i];
    }
    for(int i=mid;i<n;i++){
        sum1=sum1+arr[i];
    }
    int result=sum*sum1;
    printf("%d\n",result);
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
	    left_and_right(arr,n);
	    t--;
	}
	return 0;
}
