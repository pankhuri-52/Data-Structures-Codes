#include <iostream>
using namespace std;
void swap(int arr[],int fi,int si,int d){
        for(int i=0;i<d;i++){
                int temp=arr[fi+i];
                arr[fi+i]=arr[si+i];
                arr[si+i]=temp;
        }
}

void leftRotate(int arr[],int d,int n){
	if(d==0 || d==n)
		return ;
	if(n-d==d){
		swap(arr,0,n-d,d);
		return;
	}
	if(d<n-d){
		swap(arr,0,n-d,d);
		leftRotate(arr,d,n-d);
	}
	else{
		swap(arr,0,d,n-d);
		leftRotate(arr+n-d,2*d-n,d);
	}
}
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc-1;i++){
		arr[k++]=atoi(argv[i]);
	}
        int d=atoi(argv[argc-1]);
	leftRotate(arr,d,k);
	cout<<"After rotating the array to the left by using blockswap algorithm"<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
