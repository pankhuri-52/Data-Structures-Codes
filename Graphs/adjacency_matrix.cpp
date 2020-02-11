#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[20][20];
void display(int v){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void add_edge(int v1,int v2){
   arr[v1][v2]=1;
   arr[v2][v1]=1;
}
int main(){
    int v=5;
    add_edge(0,0);
    add_edge(0,3);
    add_edge(1,1);
    add_edge(2,1);
    add_edge(2,3);
    add_edge(3,0);
    add_edge(3,4);
    add_edge(4,1);
    add_edge(4,2);
    display(v);
    return 0;
}
