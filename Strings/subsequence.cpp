#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subsequence(int k,string str){
    int freq[26]={0};
    for(int i=0;i<str.length();i++){
        freq[str[i]-'a']++;
    }
    for(int i=0;i<str.length();i++){
        if(freq[str[i]-'a']>=k){
            cout<<str[i];
        }
    }
}
int main(int argc,const char *argv[]){
    int k=atoi(argv[1]);
    string str=argv[2];
    subsequence(k,str);
    return 0;
}
