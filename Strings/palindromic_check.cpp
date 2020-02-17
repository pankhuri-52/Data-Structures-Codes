#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
	cin.ignore();
    while(t--) {
    string str;
    getline(cin, str);
    
    char ch[str.length()];
    int k=0;
    for(int i=0;i<str.length();i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9')){
            ch[k++]=tolower(str[i]);
        }
    }
    
    int flag=0;
    for(int i=0,j=k-1;i<k/2,j>=0;i++,j--){
        if(ch[i]==ch[j]){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
   
}
	return 0;
}
