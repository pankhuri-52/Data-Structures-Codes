// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int v, vector<vector<int>> adj[], int s)
    {
        //Make a minimum priority queue containing distance and node
        //so that the minimum distance is at the top of priority queue /* priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > pq;
        //Now take an array which contains the DISTANCE OF ALL NODES FROM SOURCE
       
        
        //initialize the distance from the source
        //push the first node that is the source node and its distance to priority queue
        
        //until the priority queue is empty
     
            //iterating over the graph OR the adjacency list
        
        
       // Code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> > pq;
        vector<int> distance(v,INT_MAX);
        distance[s] = 0;
        pq.push({0,s});
        while(!pq.empty())
        {
            int dist = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for(auto &adjnode : adj[node]) 
            {
                if( (dist + adjnode[1]) < distance[adjnode[0]]) 
                 { 
                     distance[adjnode[0]] = dist + adjnode[1];
                     pq.push({distance[adjnode[0]],adjnode[0]});
                 }
            }
        }
        return distance;
        
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends
