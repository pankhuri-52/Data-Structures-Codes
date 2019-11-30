#include <iostream>
using namespace std;
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void max_heap(int arr[],int i,int n){
	int l=2*i+1;
	int r=2*i+2;
	int largest=i;
	if(l<n && arr[l]>arr[i])
		largest=l;
	if(r<n && arr[r]>arr[largest])
		largest=r;
	if(largest!=i){
		swap(&arr[i],&arr[largest]);
		max_heap(arr,largest,n);
	}
}
void check(int arr[],int n){
	for(int i=(n-2)/2;i>=0;--i){
		max_heap(arr,i,n);
	}
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	int arr1[argc];
	int m=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	for(int i=0;i<k;i++){
		arr1[m++]=arr[i];
	}
	check(arr,k);
	int count=0;
	for(int i=0;i<k;i++){
		if(arr[i]==arr1[i])
		     count++;
			//cout<<arr1[i]<<" ";
	}
	if(count==k)
		cout<<"Yes,it is a Max Heap"<<endl;
	else
		cout<<"No,it is not a Max Heap"<<endl;
	return 0;
}
