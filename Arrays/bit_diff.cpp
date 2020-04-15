#include <iostream>
using namespace std;
void sum_of_bits(int arr[],int n){
    int count;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int count=arr[i]^arr[j];
            sum=sum+__builtin_popcount(count); // __builtin_popcount(int x) tells the number of set bits in an integer x
        }
    }
    cout<<sum<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sum_of_bits(arr,n);
	}
	return 0;
}
