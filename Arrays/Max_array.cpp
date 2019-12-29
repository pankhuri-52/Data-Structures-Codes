#include <bits/stdc++.h>
using namespace std;
struct Height {
	int feet;
	int inches;
};
int findMax(Height arr[], int n);
// driver program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp1, tmp2;
	    cin>>n;
	    Height arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>tmp1>>tmp2;
	        arr[i]={tmp1, tmp2};
	    }
	    int res = findMax(arr, n);
	    cout<<res<<endl;
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{
    int max=0.0;
    for(int i=0;i<n;i++){
        int current=((arr[i].feet*12.0)+arr[i].inches);
        if(current>max){
            max=current;
        }
    }
    
    return max;
}
