#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       stack<int> stk;
       stk.push(0);
       vector<int> vect;
       vect.push_back(1);
       for(int i=1;i<n;i++){
           
           while(stk.empty()==false && price[stk.top()] <= price[i])
            stk.pop();
            
          vect.push_back(stk.empty() ? (i+1) : (i-stk.top()));
          
          stk.push(i);
       }
       
      return vect;
    }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
