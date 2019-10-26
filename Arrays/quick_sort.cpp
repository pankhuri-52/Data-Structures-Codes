#include <iostream>
using namespace std;
int partition(int arr[],int low,int high){
	int i=low+1;
	int pivot=arr[low];
	for(int j=low+1;j<=high;j++){
		if(arr[j]<pivot){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i=i+1;
		}
	}
	int temp1=arr[low];
	arr[low]=arr[i-1];
	arr[i-1]=temp1;
	return i-1;
}
int quick_sort(int arr[],int low,int high){
	if(low<high){
		int pos=partition(arr,low,high);
		quick_sort(arr,low,pos-1);
		quick_sort(arr,pos+1,high);
	}
}
int main(){
	int n;
	cout<<"Enter the size"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
        quick_sort(arr,0,n-1);
	cout<<"After implementing quick sort"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
