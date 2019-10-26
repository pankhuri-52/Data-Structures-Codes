#include <iostream>
#define n 4
using namespace std;
void swap_majorminor(int arr[][n]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
	                   int temp=arr[i][j];
			   arr[i][j]=arr[i][n-1-i];
			   arr[i][n-1-i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
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
	swap_majorminor(arr);
	return 0;
}
