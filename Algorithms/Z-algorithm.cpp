// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            int txt_length = txt.length();
            int pat_length = pat.length();
            vector<int> vect;
            
            for(int i=0;i<txt.length();i++){
                
                string s = txt.substr(i,pat_length);
                if(s == pat){
                    vect.push_back(i+1);
                }
            }
            
            return vect;
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if(res.size()==0)
            cout<<"-1 ";
        else
            for (int i : res)
                cout << i << " ";
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends