#include <iostream>
#define n 3
using namespace std;
void hsr(int arr[][n],int right,int bottom){
	int left=0;
	int top=0;
	int sum1=0;
	int count=0;
	int ringno;
	while(top<bottom && left<right){
		int sum=0;
		for(int i=left;i<right;i++){
			cout<<arr[top][i]<<" ";
			sum=sum+arr[top][i];
		}
		top++;
	       for(int i=top;i<bottom;i++){
		       cout<<arr[i][right-1]<<" ";
		       sum=sum+arr[i][right-1];
	       }
	       right--;
	       if(top<bottom){
		       for(int i=right-1;i>=left;i--){
			       cout<<arr[bottom-1][i]<<" ";
			       sum=sum+arr[bottom-1][i];
		       }
		       bottom--;
	       }
	       if(left<right){
		       for(int i=bottom-1;i>=top;i--){
			       cout<<arr[i][left]<<" ";
			       sum=sum+arr[i][left];
		       }
		       left++;
	       }
	       cout<<endl;
	       count++;
	       if(sum1<sum){
		       sum1=sum;
		       ringno=count;

	       }
	}
	cout<<"The ring with the highest sum is"<<endl;
	cout<<ringno;
	cout<<endl;
}
int main(){
	int arr[n][n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	hsr(arr,n,n);
	return 0;
}
