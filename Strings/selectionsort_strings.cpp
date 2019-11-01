#include <iostream>
#include <string>
using namespace std;
void selectionsort(string arr[99],int k){
	int min;
	for(int i=0;i<k-1;i++){
		min=i;
		for(int j=i+1;j<k;j++){
			if(arr[j].compare(arr[min])<0){
				min=j;
			}
		}
		if(min!=i){
			string temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
}
int main(int argc,const char *argv[]){
	string arr[99];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=argv[i];
	}
	selectionsort(arr,k);
	cout<<"After implementing selection sort in strings"<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
