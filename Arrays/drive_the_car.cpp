#include <iostream>
using namespace std;
void car_tracks(int arr[],int n,int k){
    int sum=0;
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            sum=sum+(arr[i]-k);
            k = arr[i];
            flag=1;
        }
    }
    if(flag==0)
    cout<<"-1";
    else
    cout<<sum;
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
	    car_tracks(arr,n,k);
	    cout<<endl;
	    t--;
	}
	return 0;
}
