#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:		
   
	int lps(string s)
	{
	   vector<int> A(s.size(), 0);
        int j = 0, i = 1;

        while (i < s.size())
        {
            if (s[i] == s[j])
            {
                A[i] = j + 1;
                j++;
                i++;
            }
            else
            {
                if (j == 0)
                    i++;
                else
                    j = A[j - 1];
            }
        }

        return A.back();
    // back() return last entry of the vector
	}
};

// { Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
