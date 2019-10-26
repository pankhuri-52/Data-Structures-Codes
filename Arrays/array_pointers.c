#include <stdio.h>
#include <stdlib.h>
int main(){
	int m;
	int n;
	printf("Enter the number of rows\n");
	scanf("%d",&m);
	printf("Enter the number of columns\n");
	scanf("%d",&n);
	int *arr[m];
	for(int i=0;i<m;i++){
		arr[i]=(int *)malloc(n*sizeof(int));
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d\t",*(arr+i)+j);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",*(*(arr+i)+j));
		}
		printf("\n");
	}
	return 0;
}

