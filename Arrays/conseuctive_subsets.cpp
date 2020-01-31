#include <iostream>
using namespace std;
void conseuctive_subsets(int arr[],int n){
    int hash[10000]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    int count=0;
    for(int i=0;i<10000;i++){
        if(hash[i]==1)
          count++;
          int j=i;
           while(hash[j]==1){
               j++;
           }
           i=j;
    }
    cout<<count<<endl;
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
        conseuctive_subsets(arr,n);
        t--;
    }
	return 0;
}
