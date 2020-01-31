#include <iostream>
#include <list>
using namespace std;
/*class Graph{
	int vertices;
	list <int> edges[];
};*/
int main(int argc,const char *argv[]){
	int n=atoi(argv[1]);
	int k=3;
	int source=atoi(argv[2]);
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=atoi(argv[k++]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
	}
	return 0;
}
