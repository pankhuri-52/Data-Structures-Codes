#include <iostream>
#include <string>
using namespace std;
void insertionsort(string str[99],int k){
	for(int i=1;i<k;i++){
		string key=str[i];
		int j=i-1;
		while(j>=0 && str[j].compare(key)>0){
			str[j+1]=str[j];
			j=j-1;
		}
		str[j+1]=key;
	}
	for(int i=0;i<k;i++){
		cout<<str[i]<<" ";
	}
	cout<<endl;
}
int main(int argc,char *argv[99]){
    string str[99];
    int k=0;
    for(int i=1;i<argc;i++){
	    str[k++]=argv[i];
    }
    cout<<"After implementing insertion sort on c++ style strings"<<endl;
    insertionsort(str,k);
}
