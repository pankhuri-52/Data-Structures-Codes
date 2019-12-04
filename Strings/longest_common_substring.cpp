#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
int lcs(string str1,int len1,string str2,int len2){
    int length=0;
    int lcssuffix[len1+1][len2+1];
    for(int i=0;i<=len1;i++){
        for(int j=0;j<=len2;j++){
            if(i==0 || j==0)
            lcssuffix[i][j]=0;
            else if(str1[i-1]==str2[j-1]){
            lcssuffix[i][j]=lcssuffix[i-1][j-1]+1;
            length=max(length,lcssuffix[i][j]);
            } else{
                lcssuffix[i][j]=0;
            }
        }
    }
    return length;
}
int main(int argc,const char *argv[]){
    string str1=argv[1];
    string str2=argv[2];
    int len1=str1.length();
    int len2=str2.length();
    int len=lcs(str1,len1,str2,len2);
    cout<<len;
    return 0;
}

