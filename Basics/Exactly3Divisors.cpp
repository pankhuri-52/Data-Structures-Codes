#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

int exactly3Divisors(int n)
{
  bool prime[n+1];
  memset(prime,true,sizeof(prime));
  prime[0] = prime[1] = 0;
  for(int p=2;p*p<=n;p++){
      if(prime[p]==true){
          for(int i=p*2;i<=n;i=i+p){
              prime[i] = false;
          }
      }
  }
  int count=0;
  for(int i=0;i*i<=n;i++){
      if(prime[i])
       count++;
  }
  return count;
}

// { Driver Code Starts.


int main()
 {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<exactly3Divisors(N)<<endl;
    }
	return 0;
}
