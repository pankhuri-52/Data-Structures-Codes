#include <bits/stdc++.h>
using namespace std;
void printArr(int ,int );
void setToZero(int ,int );
void xor1ToN(int , int );

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    xor1ToN(arr,n);
	    printArr(arr,n);
	    setToZero(arr,n);
	    printArr(arr,n);
	}
	return 0;
}

}

void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void setToZero(int arr[],int n)
{
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
}
void xor1ToN(int arr[], int n)
{
   for(int i=0;i<n;i++){
       arr[i]=arr[i]^i;
   }
}
