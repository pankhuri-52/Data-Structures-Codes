#include <iostream>
using namespace std;
void intersection_unsorted(int arr1[99],int n1,int arr2[99],int n2){
	int c[99];
	int k=0;
	for(int i=0;i<n1;i++){
		c[k++]=arr1[i];
	}
	for(int i=0;i<n2;i++){
		c[k++]=arr2[i];
	}
	cout<<"After intersection of two unsorted arrays"<<endl;
	for(int i=0;i<k;i++){
		for(int j=i+1;j<k;j++){
			if(c[i]==c[j]){
				cout<<c[j]<<" ";
			}
		}
	}
	cout<<endl;
}
int main(){
	int n1,n2;
	cout<<"Enter the number of elements in array1"<<endl;
	cin>>n1;
	int a[n1];
	cout<<"Enter the number of elements in array2"<<endl;
	cin>>n2;
	int b[n2];
	cout<<"Enter the elements in array1"<<endl;
	for(int i=0;i<n1;i++){
		cin>>a[i];
	}
	cout<<"Enter the elements in array2"<<endl;
	for(int i=0;i<n2;i++){
		cin>>b[i];
	}
	intersection_unsorted(a,n1,b,n2);
	return 0;
}
