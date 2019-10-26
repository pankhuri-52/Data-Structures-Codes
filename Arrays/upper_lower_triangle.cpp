#include <iostream>
#define n 5
using namespace std;
void upperlower(int arr[][n]){
	cout<<"The upper triangular matrix elements are"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<j){
				cout<<arr[i][j]<<" ";
			}
		}
	}
	cout<<endl;
	cout<<"The lower triangular matrix elements are"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>j){
				cout<<arr[i][j]<<" ";
			}
		}
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
	upperlower(arr);
	return 0;
}
