#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	int max,j;
	int x=k-1;
	for(int i=k-1;i>1;--i){
		for(max=0,j=0;j<=i;j++){
			if(arr[j]>arr[max])
				max=j;
		}
		if(max!=k-1){
			int temp=arr[max];
			arr[max]=arr[x];
			arr[x]=temp;
		}
		x--;
	}
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
