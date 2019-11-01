#include <iostream>
using namespace std;
int recursive_selection_sort(int arr[],int k,int i){
	if(i>k)
		return 0;
		int min=i;
		for(int j=i+1;j<k;j++)
			if(arr[min]>arr[j])
				min=j;
		int key=arr[min];
		while(min>i){
			arr[min]=arr[min-1];
			min--;
		}
               arr[i]=key;
	       recursive_selection_sort(arr,k,++i);
}
int main(int argc,char *argv[]){
	int arr[99];
	int k;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	recursive_selection_sort(arr,k,0);
	cout<<"After using selection sort recursively"<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
