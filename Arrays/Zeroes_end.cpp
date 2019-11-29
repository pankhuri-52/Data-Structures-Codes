#include <iostream>
using namespace std;
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void zeroes_end(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]==0){
		for(int j=i+1;j<n;j++){
		if(arr[j]!=0)
			swap(&arr[i],&arr[j]);
		}
	    }
	}
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	zeroes_end(arr,k);
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
