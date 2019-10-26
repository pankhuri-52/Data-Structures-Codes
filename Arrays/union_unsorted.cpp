#include <iostream>
using namespace std;
void union_unsorted(int arr1[99],int n1,int arr2[99],int n2){
	int c[99];
	int k=0;
	int count=0;
	int d[99];
	int i,j;
	for(int i=0;i<n1;i++){
		c[k++]=arr1[i];
	}
	for(int i=0;i<n2;i++){
		c[k++]=arr2[i];
	}
	for(i=0;i<k;i++){
		for(j=0;j<count;j++){
			if(c[i]==d[j])
				break;
		}
		if(j==count){
			d[count]=c[i];
			count++;
		}
	}
	cout<<"After the union of two unsorted arrays"<<endl;
	for(int i=0;i<count;i++){
		cout<<d[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n1,n2;
	cout<<"Enter the number of elements of array 1"<<endl;
	cin>>n1;
	cout<<"Enter the number of elements of array 2"<<endl;
        cin>>n2;
	cout<<"Enter the elements of array 1"<<endl;
	int a[n1],b[n2];
	for(int i=0;i<n1;i++){
		cin>>a[i];
	}
	cout<<"Enter the elements of array 2"<<endl;
	for(int i=0;i<n2;i++){
		cin>>b[i];
	}
	union_unsorted(a,n1,b,n2);
	return 0;
}
