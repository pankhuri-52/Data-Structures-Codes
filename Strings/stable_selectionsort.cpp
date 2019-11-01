#include <iostream>
using namespace std;
void stable_selectionsort(int arr[99],int k){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min])
				min=j;
		}
		int key=arr[min];
		while(min>i){
			arr[min]=arr[min-1];
			min--;
		}
	}		
}
int main(int argc,char *argv[]){
	int arr[99];
        int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=argv[i];
	}
	stable_selectionsort(arr,k);
	cout<<"After implementing stable selection sort"<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
