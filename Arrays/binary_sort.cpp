#include <iostream>
using namespace std;
int binarysearch(int arr[99],int key,int low,int high){
	if(high<=low)
		return (key>arr[low])?(low+1):low;
	int mid=low+(high-low)/2;
	if(key==arr[mid])
		return mid+1;
	if(key>arr[mid])
		return binarysearch(arr,key,mid+1,high);
	return binarysearch(arr,key,low,mid-1);
}
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	for(int i=1;i<k;i++){
		int j=i-1;
		int key=arr[i];
		int loc=binarysearch(arr,key,0,j);
		while(j>=loc){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	cout<<"After implementing binary insertion sort"<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
