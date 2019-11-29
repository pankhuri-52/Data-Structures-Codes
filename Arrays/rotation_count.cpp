#include <iostream>
using namespace std;
void rotations(int arr[],int k){
    int flag=0;
    int index;
    for(int i=0;i<k;i++){
        if(arr[i]>arr[i+1]){
            index=i+1;
            flag=1;
        }
    }
    if(flag==0)
    cout<<"0";
    else
    cout<<index;
}
int main(int argc,const char *argv[]){
    int arr[argc];
    int k=0;
    for(int i=1;i<argc;i++){
        arr[k++]=atoi(argv[i]);
    }
    rotations(arr,k);
    return 0;
}
