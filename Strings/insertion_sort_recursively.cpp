#include <iostream>
using namespace std;
int insertionsort(int arr[],int k,int i){
	if(k==i)
		return -1;
	int key=arr[i];
         	int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	return insertionsort(arr,k,i+1);
}
int main(int argc,char *argv[]){
	int arr[argc-1];
	int k=0;
	for(int i=0;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	insertionsort(arr,k,1);
	cout<<"After implementing insertion sort recursively"<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
