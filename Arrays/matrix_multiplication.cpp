#include <iostream>
#define m 2
#define n 2
#define p 2
#define q 2
using namespace std;
void multiply(int arr[m][n],int arr1[p][q]){
	if(n!=p)
		cout<<"Matrix multiplication not possible"<<endl;
	else{
		int sum;
		int arr2[m][q];
		for(int i=0;i<m;i++){
			for(int j=0;j<q;j++){
				sum=0;
				for(int k=0;k<p;k++){
                                     sum=sum+arr[i][k]*arr1[k][j];
				}
				arr2[i][j]=sum;
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<q;j++){
				cout<<arr2[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
int main(){
	int arr[m][n];
	int arr1[p][q];
	cout<<"Enter the first array"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
                         cin>>arr[i][j];
		}
	}
	cout<<"Enter the second array"<<endl;
	for(int i=0;i<p;i++){
                 for(int j=0;j<q;j++){
			 cin>>arr1[i][j];
		 }
	}
       multiply(arr,arr1);
       return 0;
}
