#include <stdio.h>
#include <stdlib.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
void rearrange(int a[], int size) 
{ 
    int positive = 0, negative = 1; 
  
    while (1) { 
        while (positive < size && a[positive] >= 0) 
            positive += 2; 
  
        while (negative < size && a[negative] <= 0) 
            negative += 2; 
  
        if (positive < size && negative < size) 
            swap(a[positive], a[negative]); 
  
        else
            break; 
    } 
} 
  
int main(int argc,const char *argv[]) 
{ 
    int arr[argc];
    int k=0;
    for(int i=1;i<argc;i++){
        arr[k++]=atoi(argv[i]);
    }
    rearrange(arr, k);  
    for (int i = 0; i < k-1; i++) 
        printf("%d ",arr[i]);
    printf("%d",arr[k-1]);
  
    return 0; 
} 
