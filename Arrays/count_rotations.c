#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int a;
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}	
	}
	for(int i=0;i<n;i++){
		if(arr[i]==max)
			a=i;
	}
	if(a==n-1){
		printf("Array is already sorted");
	}
	else{
		printf("Either left rotation of %d or right rotation of %d is applied",a+1,n-(a+1));
	}
	return 0;
}
