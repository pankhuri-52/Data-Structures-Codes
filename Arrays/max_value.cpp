#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int n;
	    cin>>n;
	    int m;
	    cin>>m;
	    int arr[n]={0};
	    int max=0;
	    for(int i=0;i<m;i++){
	        int a;
	        cin>>a;
	        int b;
	        cin>>b;
	        int k;
	        cin>>k;
	        
	        if((a<=n-1) && (b<=n-1)){
	            for(int j=a;j<=b;j++){
	                arr[j]=arr[j]+k;
	                if(arr[j]>max)
	                max=arr[j];
	            }
	        }
	    }
	    cout<<max<<endl;
	    t--;
	}
	return 0;
}
