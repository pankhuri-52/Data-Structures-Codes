#include <iostream>
using namespace std;
void sherlock(int arr[],int n){
    
    int arr1[n]={0};
    for(int i=0;i<n;i++){
        arr1[arr[i]]=1;
    }
    for(int i=1;i<n+1;i++){
        if(arr1[i]!=1)
         cout<<i<<" ";
    }
}
int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sherlock(arr,n);
	    cout<<endl;
	    t--;
	}
	return 0;
}
