#include <iostream>
#include <string>
using namespace std;
void check_anagrams(string str1,string str2){
    int count=0;
    if(str1.length()==str2.length()){
        for(int i=0;i<str1.length();i++){
            for(int j=0;j<str2.length();j++){
                if(str1[i]==str2[j]){
                    count++;
                }
            }
        }
    }
    else
      cout<<"NO";
    
    if(count==str1.length()){
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}
int main(int argc,const char *argv[]){
    string str1=argv[1];
    string str2=argv[2];
    check_anagrams(str1,str2);
    return 0;
}
