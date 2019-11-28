#include <stdio.h>
#include <stdlib.h>
void merge_in_sorted_order(int A[],int k,int B[],int x){
	int C[k];
	int size=0;
	for(int i=0;i<k;i++){
		if(A[i]!=0){
                     C[size++]=A[i];
		}
	}
	for(int i=0;i<x;i++){
		if(B[i]!=0)
		C[size++]=B[i];
	}
        for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(C[i]>C[j]){
				int temp=C[i];
				C[i]=C[j];
				C[j]=temp;
			}
		}
	}
	for(int i=0;i<size-1;i++){
		printf("%d ",C[i]);
	}
	printf("%d",C[size-1]);
}
int main(int argc,const char *argv[]){
	int n=atoi(argv[1]);
	int A[argc];
	int k=0;
	int B[argc];
	int x=0;
	for(int i=2;i<n+2;i++){
		A[k++]=atoi(argv[i]);
	}
	for(int i=n;i<argc;i++){
                B[x++]=atoi(argv[i]);
	}
	merge_in_sorted_order(A,k,B,x);
	return 0;
}
