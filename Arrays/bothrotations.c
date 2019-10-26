#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements\n");
	for(int i=0;i<n;i++){
           scanf("%d",&arr[i]);
	}
	int x;
	int temp,temp1;
	printf("Enter the number of rotations\n");
	scanf("%d",&x);
	for(int i=0;i<x;i++){
		temp=arr[(n/2)-1];
		for(int j=(n/2)-1;j>=0;j--){
			arr[j]=arr[j-1];
		}
		arr[0]=temp;
	}
	for(int i=0;i<x;i++){
		temp1=arr[n/2];
		for(int j=n/2;j<n-1;j++){
			arr[j]=arr[j+1];
		}
		arr[n-1]=temp1;
	}
	printf("Array after first half being right rotated and second half being left rotated\n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
