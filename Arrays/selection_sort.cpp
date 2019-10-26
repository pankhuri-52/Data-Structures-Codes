#include <iostream>
#define n 5
using namespace std;
void selectionsort(int arr[n]){
	int min,temp;
	for(int i=0;i<n-1;i++){
		 min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min])
				min=j;
		}
		if(min!=i){
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
	    cin>>arr[i];
    }
    selectionsort(arr);
    return 0;
}
