#include <iostream>
#define ROTATIONS 1
#define M 4
#define N 5
using namespace std;
void rotate(int row,int column,int arr[M][N]){
	int prev,curr;
	int m=M;
	int n=N;
	if(row>M || column>N)
		return;
	if(row+1==M || column+1==N)
		return;
	else {
		while(row<(M/2) && column<(N/2)){
                prev=arr[row+1][column];
		for(int i=column;i<n;i++){
			curr=arr[row][i];
			arr[row][i]=prev;
			prev=curr;
		}
		for(int i=row+1;i<m;i++){
			curr=arr[i][n-1];
			arr[i][n-1]=prev;
			prev=curr;
		}
		for(int i=n-2;i>=column;i--){
			curr=arr[m-1][i];
			arr[m-1][i]=prev;
			prev=curr;
		}
		for(int i=m-2;i>=row;i--){
			curr=arr[i][column];
			arr[i][column]=prev;
			prev=curr;
		}
		row++;
	        column++;
		m--;
		n--;
		}
	}
}
int main(void){
	int arr[M][N]={{1,2,3,4,5},
		       {6,7,8,9,10},
		       {11,12,13,14,15},
		       {16,17,18,19,20}
	};
	for(int i=0;i<ROTATIONS;i++)
		rotate(0,0,arr);
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
