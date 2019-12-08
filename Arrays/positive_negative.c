#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void arrange(int arr[],int k){
	int positive=0;
	int negative=1;
	while(true){
		while(positive<k && arr[positive]>=0){
			positive=positive+2;
		}
		while(negative<k && arr[negative]<=0){
			negative=negative+2;
		}
		if(positive<k && negative<k)
			swap(&arr[positive],&arr[negative]);
		else
			break;
	}
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	arrange(arr,k);
	for(int i=0;i<k-1;i++){
		printf("%d ",arr[i]);
	}
	printf("%d",arr[k-1]);
	return 0;
}

