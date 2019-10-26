#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=0;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	int low=0;
	int high=k-1;
	int mid=low+(high-low)/2;
	int temp[mid],temp1[mid];
	int x=0;
	int y=0;
	for(int i=mid+1;i<k;i++){
           printf("%d\t",arr[i]);
        }

	for(int i=0;i<mid;i++){
	   printf("%d\t",arr[i]);
	}
	return 0;
}
