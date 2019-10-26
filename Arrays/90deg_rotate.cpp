#include <iostream>
using namespace std;
#define n 3
void transpose(int arr[][n]){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
}
void mirror(int arr[][n]){
	int start=0;
	int end=n-1;
	while(start<end){
		for(int i=0;i<n;i++){
		int temp=arr[i][start];
		arr[i][start]=arr[i][end];
		arr[i][end]=temp;
	}
		start++;
		end--;
	}
}
int main(){
	int arr[n][n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	transpose(arr);
        mirror(arr);
	cout<<"2d array after rotating it 90 degree"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
