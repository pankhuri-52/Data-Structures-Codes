#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void displayAdjList(list<int> adj_list[], int v) {
   for(int i = 0; i<v; i++) {
      cout << i << "--->";
      list<int> :: iterator it;
      for(it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
         cout << *it << " ";
      }
      cout << endl;
   }
}
void addEdge(list<int> adj_list[], int u, int v) {
   adj_list[u].push_back(v);
   adj_list[v].push_back(u);
}
int main() {
   int v = 5;
   list<int> adj_list[v];
   addEdge(adj_list, 0, 0);
	addEdge(adj_list, 0, 3);
	addEdge(adj_list, 1, 1);
	addEdge(adj_list, 2, 1);
	addEdge(adj_list, 2, 3);
	addEdge(adj_list, 3, 1);
	addEdge(adj_list, 3, 4);
	addEdge(adj_list,4,1);
	addEdge(adj_list,4,2);
   displayAdjList(adj_list, v);
   return 0;
}
