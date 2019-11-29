#include <iostream>
using namespace std;
void searching(int element,int arr[],int k){
    int flag=0;
    int index;
    for(int i=0;i<k;i++){
        if(arr[i]==element){
            index=i;
            flag=1;
        }
    }
    if(flag==1)
    cout<<index;
    if(flag==0)
    cout<<"-1";
}
int main(int argc,const char *argv[]){
    int arr[argc];
    int k=0;
    int element=atoi(argv[1]);
    for(int i=2;i<argc;i++){
        arr[k++]=atoi(argv[i]);
    }
    searching(element,arr,k);
    return 0;
}
