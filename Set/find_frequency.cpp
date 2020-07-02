#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

/*Function to find frequency of x
* x : element whose frequency is to be found
* v : input vector
*/
int findFrequency(vector<int> v, int x){
    unordered_map <int,int > map;
    
    for(int i=0;i<v.size();i++){
        map[v[i]]++;
    }
    int res=0;
    for(auto i : map) {
        if(i.first == x){
           res=i.second;
        }
    }
    return res;
}
