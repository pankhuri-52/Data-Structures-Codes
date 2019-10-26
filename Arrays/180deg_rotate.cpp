#include <iostream>
#define n 5
using namespace std;
void transpose(int arr[][n]){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
}
void rotate(int arr[][n]){
   int start=0;
   int end=n-1;
   while(end>0){
      for(int i=0;i<end;i++){
        int temp=arr[i][start];
	arr[i][start]=arr[end][end-i+start];
	arr[end][end-i+start]=temp;
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
	cout<<"After transposing"<<endl;
	for(int i=0;i<n;i++){
	  for(int j=0;j<n;j++){
	      cout<<arr[i][j]<<" ";
	  }
	  cout<<endl;
	}
	rotate(arr);
	cout<<"After rotating 180 degree"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
