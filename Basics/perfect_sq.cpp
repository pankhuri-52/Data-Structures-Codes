#include <iostream>
#include <math.h>
using namespace std;
void check_squares(int a,int b){
    int count=0;
    for(int i=a;i<=b;i++){
        int j=i;
        int temp= floor(sqrt(j));
        if((temp*temp)==i)
          count++;
    }
    cout<<count;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    check_squares(a,b);
	    cout<<endl;
	}
	return 0;
}
