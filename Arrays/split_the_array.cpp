#include <iostream>
using namespace std;
void splitting(int arr[],int k,int index){
    int arr1[k];
    int m=0;
   for(int i=index;i<k;i++){
       arr1[m++]=arr[i];
   }
   for(int i=0;i<index;i++){
       arr1[m++]=arr[i];
   }
   for(int i=0;i<k-1;i++){
       cout<<arr1[i]<<" ";
   }
   cout<<arr1[k-1];
}
int main(int argc,const char *argv[]){
    int arr[argc];
    int k=0;
    int index=atoi(argv[1]);
    for(int i=2;i<argc;i++){
        arr[k++]=atoi(argv[i]);
    }
    splitting(arr,k,index);
    return 0;
}
