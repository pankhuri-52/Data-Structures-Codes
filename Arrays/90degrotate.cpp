#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n][n];
	int temp[n][n];
	int k=0;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"2darray after mirror imaging"<<endl;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
