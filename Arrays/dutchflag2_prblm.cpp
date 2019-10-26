#include <iostream>
using namespace std;
void dutchflag(int arr[],int n){
	int low=0;
	int high=n-1;
	int mid=0;
	while(mid<=high){
		switch(arr[mid]){
			case 0:
				{
					int temp=arr[low];
					arr[low]=arr[mid];
					arr[mid]=temp;
					low++;
					mid++;
					break;
				}
			case 1:
				{
					mid++;
					break;
				}
			case 2:{
				       int temp1=arr[mid];
				       arr[mid]=arr[high];
				       arr[high]=temp1;
				       high--;
				       break;
			       }
		}
	}
}
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	dutchflag(arr,k);
	cout<<"After implementing dutch flag problem"<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
