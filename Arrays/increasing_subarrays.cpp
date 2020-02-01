#include <iostream>
using namespace std;
void increasing(int arr[],int n){
    int temp=0;
    int s=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            s=s+(i-temp);
        } else {
            temp=i;
        }
    }
    cout<<s<<endl;
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
	    increasing(arr,n);
	    t--;
	}
	return 0;
}
