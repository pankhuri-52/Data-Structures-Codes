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
	printf("Matrix after transposing\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
