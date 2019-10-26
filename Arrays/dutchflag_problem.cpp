#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	int b[k];
	int c[k];
	int d[k];
	int x=0;
	int y=0;
	int z=0;
	int pivot=1;
	for(int i=0;i<k;i++){
		if(arr[i]<pivot)
			b[x++]=arr[i];
		else if(arr[i]==pivot)
			c[y++]=arr[i];
		else
			d[z++]=arr[i];
	}
	for(int i=0;i<x;i++){
		cout<<b[i]<<" ";
	}
	for(int i=0;i<y;i++){
		cout<<c[i]<<" ";
	}
	for(int i=0;i<z;i++){
		cout<<d[i]<<" ";
	}
        return 0;
}
