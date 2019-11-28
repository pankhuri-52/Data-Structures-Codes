#include <stdio.h>
#include <stdlib.h>
void right_rotation(int arr[],int n,int d){
    for(int i=0;i<d;i++){
        int temp=arr[n-1];
        for(int j=n-1;j>=0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    printf("%d",arr[n-1]);
}
int main(int argc,const char *argv[]){
    int arr[argc];
    int k=0;
    int n=atoi(argv[1]);
    int d=atoi(argv[2]);
    for(int i=3;i<argc;i++){
        arr[k++]=atoi(argv[i]);
    }
    right_rotation(arr,k,d);
    return 0;
}
