#include <iostream>
using namespace std;

	void add_ones(int n,int k,int arr[]){
	    int arr1[n]={0};
	    for(int i=0;i<k;i++){
	        for(int j=arr[i]-1;j<n;j++){
	            arr1[j]=arr1[j]+1;
	        }
	    }
       
       for(int i=0;i<n;i++){
           cout<<arr1[i]<<" ";
       }
       cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
	    int arr[k];
	    for(int i=0;i<k;i++){
	        cin>>arr[i];
	    }
	    add_ones(n,k,arr);
	    t--;
	}
	return 0;
}
