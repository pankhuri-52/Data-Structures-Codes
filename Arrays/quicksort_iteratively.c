#include <stdio.h>
#include <stdlib.h>
void swap(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
}
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	int start=0;
	int end=k-1;
	int pi;
	int count=0;
	while(start<end){
		count++;
		int pivot_index=end;
		int pivot=arr[pivot_index];
		int k=(start-1);
		for(int j=start;j<=end;j++){
			if(j==pivot_index)
		         	continue;
			if(arr[j]<=pivot){
				k++;
				swap(&arr[k],&arr[j]);
			}
		}
		swap(&arr[k+1],&arr[end]);
		pi=k+1;
              if(count%2==0){
		      end=pi-1;
	      }
	      if(count%2!=0){
		      start=pi+1;
	      }
	}
	printf("After implementing quick sort iteratively\n");
	for(int i=0;i<k;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
