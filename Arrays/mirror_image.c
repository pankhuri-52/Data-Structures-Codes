#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int arr[n][n];
	printf("Enter the elements\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The mirror image of this matrix is\n");
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
