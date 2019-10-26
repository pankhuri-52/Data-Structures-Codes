#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
        int arr[n][n];
	printf("Enter the elements\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("2d matrix after rotation 180 degree\n");
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
