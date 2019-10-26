#include <iostream>
#define n 5
using namespace std;
void leftrotate(int b[99],int k){
	for(int i=0;i<1;i++){
		int temp=b[0];
		for(int j=0;j<k-1;j++){
			b[j]=b[j+1];
		}
		b[k-1]=temp;
	}
	cout<<"After rotating anti clockwise"<<endl;
	for(int i=0;i<k;i++)
		cout<<b[i]<<" ";
	cout<<endl;
}
void rightrotate(int b[99],int k){
       for(int i=0;i<1;i++){
	       int temp=b[k-1];
	       for(int j=k-1;j>=0;j--){
		       b[j]=b[j-1];
	       }
	       b[0]=temp;
       }
       cout<<"After rotating clockwise"<<endl;
       for(int i=0;i<k;i++)
	       cout<<b[i]<<" ";
       cout<<endl;
}
void ring(int arr[][n],int right,int bottom){
	int left=0;
	int top=0;
	int count=0;
	while(left<right && top<bottom){
		int b[99];
		int k=0;
		for(int i=left;i<right;i++){
			cout<<arr[top][i]<<" ";
			b[k++]=arr[top][i];
		}
		top++;
		for(int i=top;i<bottom;i++){
		        cout<<arr[i][right-1]<<" ";
			b[k++]=arr[i][right-1];
		}
		right--;
		if(top<bottom){
			for(int i=right-1;i>=left;i--){
				cout<<arr[bottom-1][i]<<" ";
				b[k++]=arr[bottom-1][i];
			}
			bottom--;
		}
		if(left<right){
			for(int i=bottom-1;i>=top;i--){
				cout<<arr[i][left]<<" ";
				b[k++]=arr[i][left];
			}
			left++;
		}
		cout<<endl;
		cout<<"New array"<<endl;
		for(int i=0;i<k;i++)
			cout<<b[i]<<" ";
		cout<<endl;
		count++;
		if(count%2==0)
			leftrotate(b,k);
		if(count%2!=0)
			rightrotate(b,k);

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
	ring(arr,n,n);
	return 0;
}
