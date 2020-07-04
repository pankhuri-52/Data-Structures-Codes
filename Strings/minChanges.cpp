#include <iostream>
#include <unordered_map>
using namespace std;

void distinction(string str){
    int n=str.length();
    unordered_map<char,int> map;
    for(int i=0;i<n;i++){
        map[str[i]]++;
    }
    int sum=0;
    for(auto x: map){
        if(x.second>1){
            sum=sum+x.second-1;
        }
    }
    cout<<sum<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        distinction(str);
    }
	return 0;
}
