#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	int count=argc-1;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	int *ptr;
	ptr=arr;
	for(int i=count-1;i>=0;i--){
		printf("%d",*(ptr+i));
	}
	return 0;

}
