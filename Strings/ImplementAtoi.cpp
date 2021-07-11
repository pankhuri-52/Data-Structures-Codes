// { Driver Code Starts
 #include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
        /*You are required to complete this method */
    int atoi(string str)
    {
        
        int digit = -1;
        vector<int> vect;
        int sign = 1;
        
        for(int i=0;i<str.length();i++){
            if(str[i]=='-'){
                sign = -1;
            }
            else if(str[i]=='0') digit = 0;
            else if(str[i]=='1') digit = 1;
            else if(str[i]=='2') digit = 2;
            else if(str[i]=='3') digit = 3;
            else if(str[i]=='4') digit = 4;
            else if(str[i]=='5') digit = 5;
            else if(str[i]=='6') digit = 6;
            else if(str[i]=='7') digit = 7;
            else if(str[i]=='8') digit = 8;
            else if(str[i]=='9') digit = 9;
            else {
                digit = -1;
                break;
            }
            
            if(digit>=0)
            vect.push_back(digit);
        }
        
        if(digit == -1)
        return -1;
        
        else {
            int res = 0, s = vect. size(); 
            for(int num : vect) 
            res += num * pow(10, --s);
            return res*sign;
        }
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
