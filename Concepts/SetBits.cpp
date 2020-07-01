#include <iostream>
using namespace std;
void arya_wins(int n){
      cout<<__builtin_popcount(n)<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    arya_wins(n);
	}
	return 0;
}
