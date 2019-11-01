#include <iostream>
#include <string.h>
using namespace std;
int main(){
	srand(time(NULL));
	int n;
	cout<<"Enter the length of random strings";
	cin>>n;
	char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	string str="";
	for(int i=0;i<n;i++){
		str=str+alpha[rand()%26];
	}
	cout<<str;
	
	return 0;
}
