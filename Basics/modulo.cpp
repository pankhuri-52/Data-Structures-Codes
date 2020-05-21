int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    unsigned long long sum = (a + b);
    return (int)(sum%M);
}

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    cout<<sumUnderModulo(a,b)<<endl;
	}
	return 0;
} 
