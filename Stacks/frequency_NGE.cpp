#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
void frequency_NGE(int arr[],int k){
	int j=0;
	int b[99];
	int x=0;
	stack <int> stk;
	while(j<=k-1){
		if(arr[j]==arr[j-1]){
			j++;
		}
		stk.push(arr[j]);
		for(int i=0;i<k;i++){
			if(stk.empty()==false && arr[i]==stk.top()){
				stk.push(arr[i]);
			}
		}
		int count=0;
		while(stk.empty()==false){
			count++;
			stk.pop();
		}
		cout<<"Frequency of "<<arr[j]<<" is "<<(count-1)<<endl;
		j++;
	}
}
int main(int argc,const char *argv[]){
	int n=atoi(argv[1]);
	int arr[argc];
	int k=0;
	for(int i=2;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	cout<<"Frequency of NGE is"<<endl;
	frequency_NGE(arr,k);
	return 0;
}
