#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class DFS{
    int v;
    list <int> *adjlist;
    void dfs_util(int v,bool visited[]);
public:
    DFS(int v){
        this->v=v;
        adjlist=new list<int> [v];
    }
    void addEdge(int v,int w){
        adjlist[v].push_back(w);
    }
    void display();
};

void DFS::dfs_util(int v,bool visited[]){
    visited[v]=true;
    cout<<v<<" ";
    list<int>::iterator i;
    for(i=adjlist[v].begin();i!=adjlist[v].end();++i){
        if(!visited[*i])
            dfs_util(*i,visited);
    }
}

void DFS::display(){
    bool *visited=new bool[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false)
        dfs_util(i,visited);
    }
}

int main(){
    DFS dfs(5);
    dfs.addEdge(0,1);
    dfs.addEdge(0,2);
    dfs.addEdge(0,3);
    dfs.addEdge(1,2);
    dfs.addEdge(2,4);
    dfs.addEdge(3,3);
    dfs.addEdge(4,4);
    cout<<"Depth first traversal of the graph is"<<endl;
    dfs.display();
    return 0;
}
