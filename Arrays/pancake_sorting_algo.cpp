#include <iostream>
using namespace std;
void flip(int arr[99],int max){
	int start=0;
	while(start<max){
		int temp=arr[start];
		arr[start]=arr[max];
		arr[max]=temp;
		start++;
		max--;
	}
}
int findMax(int arr[99],int n){
	int max,j;
	for(max=0,j=0;j<n;++j){
		if(arr[j]>arr[max])
			max=j;
	}
	return max;
}
void sorting(int arr[99],int k){
	for(int i=k;i>1;--i){
            int max=findMax(arr,i);
	    if(max!=k-1){
		    flip(arr,max);
                    flip(arr,i-1);
	    }
	}
}
int main(int argc, char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	sorting(arr,k);
	cout<<"After implementing pancake sorting algorithm"<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
