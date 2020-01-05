#include <iostream>
using namespace std;
void fine(int n,int d,int arr[],int p[]){
    int sum=0;
    for(int i=0;i<n;i++){
        if(d%2==0){
            if(arr[i]%2!=0){
                sum=sum+p[i];
            }
        }
        if(d%2!=0){
            if(arr[i]%2==0){
                sum=sum+p[i];
            }
        }
    }
    cout<<sum<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int n;
	    cin>>n;
	    int d;
	    cin>>d;
	    int car[n];
	    for(int i=0;i<n;i++){
	        cin>>car[i];
	    }
	    int p[n];
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    fine(n,d,car,p);
	    t--;
	}
	return 0;
}
