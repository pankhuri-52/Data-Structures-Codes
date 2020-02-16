#include <iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++){
	        int num;
	        cin>>num;
	        v.push_back(num);
	    }
	    int k;
	    cin>>k;
	    sort(v.begin(),v.end());
	    int sum=0;
	    for(int i=n-1;i>0;i--){
            if((v[i]-v[i-1])<k){
                sum+=(v[i]+v[i-1]);
                i--;
            }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
