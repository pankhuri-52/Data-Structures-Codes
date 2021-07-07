#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        int flag=0;
        pair<long,long> result;
        vector<long long>::iterator it;
        
        for(int i=0;i<v.size();i++){
           it = std::find (v.begin(), v.end(), x);
           if (it != v.end())
           {
             result.first = it - v.begin();
             flag=1;
             break;
           }
           else
             flag=0;
        }
        
        int count=0;
        if(flag==0){
            result = make_pair(-1,-1);
        } else {
            for(int i=0;i<v.size();i++){
                if(v[i]==x)
                count++;
            }
            result.second = result.first +count -1;
        }
        
        return result;
        
    }
};

// { Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
  // } Driver Code Ends
