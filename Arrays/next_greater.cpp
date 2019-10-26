#include <iostream>
#include <string.h>
using namespace std;
void next_greater_element(int arr[],int k){
	int a,flag;
	for(int i=0;i<k;i++){
		a=0,flag=0;
		for(int j=i+1;j<k;j++){
			if(arr[i]<arr[j]){
				a=arr[j];
				flag=1;
				break;
			}
		}
			if(flag==1){
				cout<<arr[i]<<"->"<<a<<endl;
			}
			if(flag==0){
				cout<<arr[i]<<"->"<<"-1"<<endl;
			}
	}
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	int n=atoi(argv[1]);
	for(int i=2;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	next_greater_element(arr,k);
	return 0;
}
