#include <iostream>
using namespace std;
void printKLargest(int array[], int n, int k)
{
   for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
       if(array[i]<array[j]){
         int temp=array[i];
         array[i]=array[j];
         array[j]=temp;
       }
     }
   }
  for(int i=0;i<k-1;i++){
      cout<<array[i]<<" ";
  }
     cout<<array[k-1];
}
int main(int argc,const char *argv[]){
	int arr[argc];
	int k=0;
	int d=atoi(argv[1]);
	for(int i=2;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	printKLargest(arr,k,d);
	return 0;
}
