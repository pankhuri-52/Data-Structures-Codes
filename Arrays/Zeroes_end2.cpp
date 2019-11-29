#include <iostream>
using namespace std;
void Zeroes_end(int arr[],int k){
	int count=0;
	for(int i=0;i<k;i++){
		if(arr[i]!=0){
			arr[count++]=arr[i];
		}
	}
	while(count<k){
		arr[count++]=0;
	}
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Zeroes_end(arr,k);
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
