#include <iostream>
#include <queue>
#include <string>
using namespace std;
void rearrange(string str){
    char prev;
    queue <char> q;
    char current;
    for(int i=0;i<str.length();i++){
        current=str[i];
        if(current!=prev){
        cout<<str[i];
        prev=current;
        if(q.empty()==false){
		char t=q.front();
            cout<<t;
	    q.pop();
        }
      } 
        else {
            q.push(str[i]);
        }
    }
}
int main(int argc,const char *argv[]){
    string str=argv[1];
    rearrange(str);
    return 0;
}
