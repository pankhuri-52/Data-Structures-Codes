#include <iostream>
#include <time.h>
using namespace std;
void swap(int *p,int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
}
int partition(int arr[99],int low,int high){
	int pivot_index=low;
	int pivot=arr[pivot_index];
	int i=high+1;
	for(int j=high;j>=low;j--){
		if(j==pivot_index){
			continue;
		}
		if(arr[j]>=pivot){
			i--;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i-1],&arr[pivot_index]);
	return i-1;
}
void quicksort(int arr[99],int start,int end){
	if(start>=end)
		return;
	else{
		int pi=partition(arr,start,end);
		quicksort(arr,start,pi-1);
		quicksort(arr,pi+1,end);
	}
}
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	quicksort(arr,0,k-1);
	cout<<"After implementing quick sort"<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
