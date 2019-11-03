#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
void odd_places(int number){
     stack <int> stk;
    int count=0;
    int num=number;
    while(number!=0){
        count++;
        number=number/10;
    }
    for(int i=0;i<count;i++){
        int n=num%10;
        stk.push(n);
        num=num/10;
    }
    for(int i=0;i<=stk.size();i++){
        cout<<stk.top();
        stk.pop();
        stk.pop();
    }
}
int main(int argc,const char *argv[]){
    int number=atoi(argv[1]);
    odd_places(number);
    return 0;
}
