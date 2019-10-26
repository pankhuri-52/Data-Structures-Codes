#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
int subsets(int arr[],int N){
      int co = 0;
    long long total = 1<<N; 

    for (long long i=0; i<total; i++) 
    { 
        long long sum = 0; 
 
        for (int j=0; j<N; j++) 
            if (i & (1<<j)) 
                sum += arr[j]; 

        if(sum%2==0){
            co++;
        } 
    }
    return co-1;

}
int main(int argc,const char *argv[]){
	int n=atoi(argv[1]);
	int arr[argc];
	int k=0;
	for(int i=2;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	int count=subsets(arr,k);
	cout<<count<<endl;
	return 0;
}
