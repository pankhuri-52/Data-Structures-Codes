#include <stdio.h>
#include <stdlib.h>
int checkHamming(int arr[],int k,int b[],int x){
	int count=0;
	for(int i=0,j=0;i<k,j<x;i++,j++){
		if(arr[i]!=b[j])
			count++;
	}
	return count;
}
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	int b[argc];
	int x=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	printf("The elements are:\n");
	for(int i=0;i<k;i++){
		b[x++]=arr[i];
		printf("%d\t",arr[i]);
	}
	printf("\n");
	int temp;
	int max=0;
	int a;
	for(int i=0;i<k;i++){
                  temp=arr[k-1];
		for(int j=k-1;j>=0;j--){
			arr[j]=arr[j-1];
		}
		arr[0]=temp;
		int c=checkHamming(arr,k,b,x);
                  if(c>max){
			  max=c;
			  a=i+1;
		  }
	}
	printf("Maximum hamming distance %d at %d rotations",max,a);

	return 0;
}
