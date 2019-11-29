#include <iostream>
using namespace std;
void Zeroes_end(int arr[],int k){
	int arr1[k];
	int m=0;
	int j=k-1;
	for(int i=0;i<k;i++){
		if(arr[i]!=0)
			arr1[m++]=arr[i];
		if(arr[i]==0)
			arr1[j--]=arr[i];
	}
	for(int i=0;i<k;i++){
                cout<<arr1[i]<<" ";
        }

}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	Zeroes_end(arr,k);
        return 0;
}
