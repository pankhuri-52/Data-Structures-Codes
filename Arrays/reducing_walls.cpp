#include <iostream>
using namespace std;
void reducing_walls(int n,int k,int arr[]){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>k){
          if(arr[i]%k==0)
            count=count-1;
            count=count+(arr[i]/k);
        }
    }
    cout<<count<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int n;
	    cin>>n;
	    int k;
	    cin>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    reducing_walls(n,k,arr);
	    t--;
	}
	return 0;
}
