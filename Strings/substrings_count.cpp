#include <iostream>
#include <string>
using namespace std;
bool check(int freq[],int k){
    for(int i=0;i<26;i++)
        if(freq[i] && freq[i]!=k)
        return false;
      return true; 
}
int substrings(string str,int k){
    int res=0;
    for(int i=0;str[i];i++){
        int freq[26]={0};
        for(int j=i;str[j];j++){
            int index=str[j]-'a';
            freq[index]++;
            if(freq[index]>k)
            break;
            else if(freq[index]==k && check(freq,k)==true)
            res++;
        }
    }
    return res;
}
int main(int argc,const char *argv[]){
     int k=atoi(argv[1]);
    string str=argv[2];
   
    cout<<substrings(str,k);
    return 0;
}
