#include <iostream>
using namespace std;

void min_trees(int n){
    cout<<__builtin_popcount(n)<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        min_trees(n);
    }
	return 0;
}
