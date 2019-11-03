#include <iostream>
#include <stack>
#include <string.h>
#define N 8
using namespace std;
bool matrix[N][N]={{0,0,1,0},
	           {0,0,1,0},
		   {0,0,0,1},
		   {0,0,1,0}};
bool knows(int a,int b){
	return matrix[a][b];
}
int findCelebrity(int n){
	stack <int> stk;
	int C;
	for(int i=1;i<n;i++){
		stk.push(i);
	}
	int A=stk.top();
	stk.pop();
	int B=stk.top();
	stk.pop();
	while(stk.size()>1){
		if(knows(A,B)){
			A=stk.top();
			stk.pop();
		} else {
			B=stk.top();
			stk.pop();
		}
	}
	C=stk.top();
	stk.pop();
	if(knows(C,A))
		C=A;
	if(knows(C,B))
		C=B;
	for(int i=0;i<n;i++){
		if( (i!=C) && (knows(C,i) || !knows(i,C)))
			return -1;
	}
	return C;
}
int main(){
	int n=4;
	int id=findCelebrity(n);
	id==-1?cout<<"No Celebrity":cout<<"Celebrity ID "<<id<<endl;
	return 0;
}
