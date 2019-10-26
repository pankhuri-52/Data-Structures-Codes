#include <iostream>
#define n 8
using namespace std;
void insertionsort(int arr[n]){
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[i]<arr[j]){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
int main(){
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	insertionsort(arr);
	return 0;
}
