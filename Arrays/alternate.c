#include <stdio.h>
#include <stdlib.h>
void rearrange(int arr[],int n){
	int arr1[n];
	int arr2[n];
	int x=0,y=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0)
			arr1[x++]=arr[i];
		if(arr[i]<0)
			arr2[y++]=arr[i];
	}
	if(x<y){
		for(int i=0;i<x;i++){
			printf("%d",arr1[i]);
	                printf("%d",arr2[i]);		
               }
	        for(int i=x;i<y;i++){
			printf("%d",arr2[i]);
		}
	} else {
		for(int i=0;i<y;i++){
			printf("%d",arr1[i]);
			printf("%d",arr2[i]);
		}
		for(int i=y;i<x;i++){
			printf("%d",arr1[i]);
		}
	}
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	rearrange(arr,k);
	return 0;
}
