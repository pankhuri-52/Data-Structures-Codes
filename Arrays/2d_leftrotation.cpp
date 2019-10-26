#include <iostream>
#define ROTATIONS 1
#define M 5
#define N 5
using namespace std;
void rotate(int row,int column,int arr[M][N]){
	int prev,curr;
	int m=M,n=N;
	if(row>M || column>N)
		return;
	if(row+1==M || column+1==N)
		return;
	else{
		while(row<(M/2) && column<(N/2)){
			prev=arr[row+1][m-1];
			for(int i=m-1;i>=row;i--){
                              curr=arr[row][i];
			      arr[row][i]=prev;
			      prev=curr;
			}
			for(int i=column+1;i<n;i++){
				curr=arr[i][column];
				arr[i][column]=prev;
				prev=curr;
			}
			for(int i=row+1;i<n;i++){
				curr=arr[m-1][i];
				arr[m-1][i]=prev;
				prev=curr;
			}
			for(int i=n-2;i>column;i--){
				curr=arr[i][n-1];
				arr[i][n-1]=prev;
				prev=curr;
			}
			row++;
			column++;
			m--;
			n--;
		}
	}
}
int main(){
	int arr[M][N];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<ROTATIONS;i++){
		rotate(0,0,arr);
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
