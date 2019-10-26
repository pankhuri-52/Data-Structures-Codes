#include <stdio.h>
#include <stdlib.h>
void reverse(int arr[],int start,int end){
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}
void rotate(int arr[],int d,int n){
	//reverse(arr,0,n-1);
	//reverse(arr,d,n-1);
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc-1;i++){
		arr[k++]=atoi(argv[i]);
	}
        int d=atoi(argc[argv-1]);
	rotate(arr,d,k);
	printf("After rotating the array using reversal algorithm\n");
	for(int i=0;i<k;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
