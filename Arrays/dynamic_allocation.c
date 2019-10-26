#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,m;
	printf("Enter the number of rows\n");
	scanf("%d",&m);
	printf("Enter the number of columns\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	int count=1;
        int *arr=(int *)malloc(m*n*sizeof(int));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			*(arr+i*n+j)=count++;
		}
	}
	for(int i=0;i<m;i++){
	    for(int j=0;j<n;j++){
                    printf("%d\t",*(arr+i*n+j));
	    }
	    printf("\n");
	}
	return 0;
}
