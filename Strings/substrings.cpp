#include <string>
using namespace std;
void substrings(string str){
    string arr[99];
    int m=0;
    for(int i=1;i<=str.length();i++){
        for(int j=0;j<=str.length()-1;j++){
            int d=j+i-1;
            string sum;
            for(int k=j;k<=d;k++){
                sum=sum+str[k];
            }
            arr[m++]=sum;
        }
    }
    int count=0;
    for(int i=0;i<m;i++){
        int n=arr[i].length();
        if(arr[i].at(0)==arr[i].at(n-1))
         count++;
    }
    cout<<count;
//     for(int i=0;i<m;i++){
//         cout<<arr[i]<<endl;
//     }
}
int main(int argc,const char *argv[]){
    string str=argv[1];
    substrings(str);
    return 0;
}
