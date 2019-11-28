#include <iostream>
using namespace std;
void greatest_sum(int arr[],int k){
	for(int i=0;i<k;i++){
		for(int j=i+1;j<k;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	int sum;
	for(int i=0;i<k;i++){
		int sum=0;
		for(int j=i+1;j<k;j++){
			sum=sum+arr[j];
		}
		arr[i]=sum;
	}
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	greatest_sum(arr,k);
	return 0;
}
