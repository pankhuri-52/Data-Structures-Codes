#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
void NGE(int arr[],int k){
     stack <int> stk;
     stk.push(arr[0]);
     for(int i=1;i<k;i++){
	     if(stk.empty()){
		     stk.push(arr[i]);
		     continue;
	     }
	     while(stk.empty()==false && stk.top()<arr[i]){
		     cout<<stk.top()<<"->"<<arr[i]<<endl;
		     stk.pop();
	     }
	     stk.push(arr[i]);
     }
     while(stk.empty()==false){
	     cout<<stk.top()<<"->"<<"-1"<<endl;
	     stk.pop();
     }
}
int main(int argc,const char *argv[]){
	int n=atoi(argv[1]);
	int arr[argc];
	int k=0;
	for(int i=2;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	NGE(arr,k);
	return 0;
}
