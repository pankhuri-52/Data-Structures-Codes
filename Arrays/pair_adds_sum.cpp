#include <iostream>
using namespace std;
void find_the_pairs(int arr[],int k,int sum){
    int flag=0;
    int a,b;
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if((arr[i]+arr[j])==sum){
                a=arr[i];
                b=arr[j];
                flag=1;
            }
        }
    }
    if(flag==1){
        cout<<a<<"_"<<b;
    }
    if(flag==0){
        cout<<"0_0";
    }
}
int main(int argc,const char *argv[]){
    int arr[argc];
    int k=0;
    int sum=atoi(argv[1]);
    for(int i=2;i<argc;i++){
        arr[k++]=atoi(argv[i]);
    }
    find_the_pairs(arr,k,sum);
    return 0;
} 
