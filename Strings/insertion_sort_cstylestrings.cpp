#include <iostream>
#include <cstring>
using namespace std;
void insertionsort(char *str[99],int k){
	char key[99];
	for(int i=1;i<k;i++){
		 strcpy(key,str[i]);
		int j=i-1;
		while(j>=0 && strcmp(str[j],key)>0){
			strcpy(str[j+1],str[j]);
			j=j-1;
		}
		strcpy(str[j+1],key);
	}
	 cout<<"After implementing insertion sort in c style strings"<<endl;
        for(int i=0;i<k;i++){
                cout<<str[i]<<" ";
        }
        cout<<endl;

}
int main(int argc, char** argv){
	char *str[99];
          int k=0;
	for(int i=1;i<argc;i++){
		str[k++]=argv[i];
	}
	insertionsort(str,k);
}
