#include <iostream>
#include <string>
using namespace std;
int main(){
   string str1;
   string str2;
   cout<<"Enter the first string"<<endl;
	   cin>>str1;
   cout<<"Enter the second string"<<endl;
          cin>>str2;
   string temp;
   str1=str2;
    cout<<"After copying string2 to string1"<<endl;
    cout<<str1;
   return 0;

}
