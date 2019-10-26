#include <bits/stdc++.h>
using namespace std;
int M[100][100];
int columnWithMaxZeros(int);

int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            cin >> M[i][j];
	        }
	    }
	    
	    cout << columnWithMaxZeros(N) << endl;
	}
	
	return 0;
}

int columnWithMaxZeros(int N){
    int max=0;
    int count;
    int colno;
    for(int i=0;i<N;i++){
	    count=0;
        for(int j=0;j<N;j++){
            if(M[j][i]==0)
              count++;
        }
        if(count>max){
            max=count;
            colno=i;
        }
    }
    return colno;
    
}
