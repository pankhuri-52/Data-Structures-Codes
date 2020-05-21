void quadraticRoots(int a,int b, int c)
{
    float ans1;
    float ans2;
    int flag=0;
   int dis = b*b-4*a*c;
   if(dis == 0){
      ans1 = ans2 = -b/(2.0*a);
   } else if(dis < 0){
       cout<<"Imaginary";
       flag=1;
   }
   else {
       ans1 = (-b + sqrt(dis))/(2.0*a);
       ans2 = (-b - sqrt(dis))/(2.0*a);
   }
   if(flag==0)
   cout<<floor(ans1)<<" "<<floor(ans2);
}



// { Driver Code Starts.

int main() {
	int T; 
	cin>>T; //input number of testcases
	
	while(T--)
	{
	    int a, b, c; 
	    cin>>a>>b>>c; //Input a, b, and c
	    
	    quadraticRoots(a,b,c);
	    cout<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends
