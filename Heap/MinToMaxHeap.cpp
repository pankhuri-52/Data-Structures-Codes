#include <iostream>
using namespace std;
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void convert(int arr[],int i,int n){
	int l=2*i+1;
	int r=2*i+2;
	int largest=i;
	if(l<n && arr[l]>arr[i])
		largest=l;
	if(r<n && arr[r]>arr[largest])
		largest=r;
	if(largest!=i){
		swap(&arr[i],&arr[largest]);
		convert(arr,largest,n);
	}
}
void Max_heap(int arr[],int n){
	for(int i=(n-2)/2;i>=0;--i){
		convert(arr,i,n);
	}
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Max_heap(arr,k);
	cout<<"After converting to Max Heap"<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
