#include <iostream>
using namespace std;
int findPath(int n,int m){
    if (n==0||m==0)
    return 1;
    else{
        return findPath(n-1,m)+findPath(n,m-1);
    }
}
int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int n;
	    cin>>n;
	    int m;
	    cin>>m;
	    int res=findPath(n,m);
	    cout<<res<<endl;
	    t--;
	}
	return 0;
}
