#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    Rectangle(){}
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    
};
int area(Rectangle r);
void maxArea(Rectangle arr[],int n);


 // } Driver Code Ends


//User function Template for C++


int area(Rectangle r)
{
   //return length*breadth
   return r.length*r.breadth;
}


void maxArea(Rectangle arr[],int n)
{
   
   //Your code here. Use area function to calculate area of a rectangle object
    int maxarea=0;
    for(int i=0;i<n;i++){
        if(area(arr[i])>maxarea)
        maxarea=area(arr[i]);
    }
    cout<<maxarea;
    cout<<endl;
}
