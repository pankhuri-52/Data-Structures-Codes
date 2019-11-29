#include <iostream>
using namespace std;
void pn_alter(int arr[],int k){
	int arr1[k];
	int arr2[k];
	int m=0;
	int n=0;
	for(int i=0;i<k;i++){
		if(arr[i]>0){
			arr1[m++]=arr[i];
		}
		if(arr[i]<0){
			arr2[n++]=arr[i];
		}
	}
	if(m>n){
		for(int i=0;i<n;i++){
			cout<<arr1[i]<<" ";
			cout<<arr2[i]<<" ";
		}
		for(int i=n;i<k-n-1;i++){
			cout<<arr1[i]<<" ";
		}
		cout<<arr1[k-n-1];
	} if(n>m) {
		for(int i=0;i<m;i++){
			cout<<arr1[i]<<" ";
			cout<<arr2[i]<<" ";
		}
		for(int i=m;i<k-m-1;i++){
			cout<<arr2[i]<<" ";
		}
		cout<<arr2[k-m-1];
	}
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=argc-1;i>=1;i--){
		arr[k++]=atoi(argv[i]);
	}
	pn_alter(arr,k);
	return 0;
}
