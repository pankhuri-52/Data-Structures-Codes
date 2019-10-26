#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int left=1;
	int high=0;
	while(arr[high]<0)
		high++;
	int right=high;
	while(arr[left]<0 && right<n){
		int temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
		left=left+2;
		right++;
	}
	printf("After arranging positive and negative alternatively\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	int sum;
	int max=arr[0];
	for(int i=0;i<n;i++){
		for(int j=i;j<=n;j++){
			sum=0;
			for(int k=i;k<j;k++){
				sum=sum+arr[k];
				if(max<sum)
					max=sum;
			}
		}
	}
	printf("The maximum sum of a subarray is:\n");
	printf("%d",max);
	
	return 0;
}
