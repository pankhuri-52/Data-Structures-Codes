#include <iostream>
using namespace std;
#define n 4
void spiral(int arr[][n],int right,int bottom){
	int left=0;
	int top=0;
	while(left<right && top<bottom){
		for(int i=left;i<right;i++)
			cout<<arr[top][i]<<" ";
		top++;
		for(int i=top;i<bottom;i++)
			cout<<arr[i][right-1]<<" ";
		right--;
		if(top<bottom){
			for(int i=right-1;i>=left;i--)
				cout<<arr[bottom-1][i]<<" ";
			bottom--;
		}
		if(left<right){
			for(int i=bottom-1;i>=top;i--)
				cout<<arr[i][left]<<" ";
			left++;
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
	spiral(arr,n,n);
	return 0;
}
