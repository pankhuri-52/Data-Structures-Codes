#include <iostream>
using namespace std;
void remove_duplicates(string str){
   int hash[150]={0};
   for(int i=0;i<str.length();i++){
       if(hash[str[i]]==1)
        continue;
      else{
          cout<<str[i];
          hash[str[i]]=1;
      }
   }
}
int main() {
	int t;
	cin>>t;
	while(t!=0){
	    string str;
	    cin>>str;
	    remove_duplicates(str);
	    cout<<endl;
	    t--;
	}
	return 0;
}
