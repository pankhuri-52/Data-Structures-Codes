#include <iostream>
using namespace std;
void setBits(int num){
    int count=0;
   for(int i=31;i>=0;i--){
       int k=num>>i;
       if(k&1)
        count++;
   }
   cout<<count<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int num;
	    cin>>num;
	    setBits(num);
	}
	return 0;
}
