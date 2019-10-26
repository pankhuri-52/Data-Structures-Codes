#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int *p,int *q){
        int temp=*p;
        *p=*q;
        *q=temp;
}
int partition(int arr[],int low,int high){
        int pivot=arr[low];
	int i=low-1;
	int j=high+1;
	while(true){
		do{
			i++;
		}while(arr[i]<pivot);
		do{
			j--;
		}while(arr[j]>pivot);
		if(i>=j)
			return j;
		swap(&arr[i],&arr[j]);
	}
}
void hoare(int arr[],int start,int end){
        if(start>=end)
                return;
        if(start<end){
        int pi=partition(arr,start,end);
        hoare(arr,start,pi-1);
        hoare(arr,pi+1,end);
        }
}
int main(int argc,char *argv[]){
        int arr[argc];
        int k=0;
       srand(time(0));
        for(int i=1;i<argc;i++){
                arr[k++]=atoi(argv[i]);
        }
        hoare(arr,0,k-1);
        printf("After implementing Hoare's Partition Scheme\n");
        for(int i=0;i<k;i++){
                printf("%d ",arr[i]);
        }
        return 0;

}
