#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n;
   scanf("%d",&n);
   int k;
   scanf("%d",&k);
   int arr[n];
   for(int i=0;i<n;i++)
   {
	 scanf("%d",&arr[i]);
   }
   for(int i=0;i<k;i++)
   {
      int last=arr[n-1];
      for(int j=n-1;j>=0;j--)
      {
	   arr[j]=arr[j-1];
      }
      arr[0]=last;
   }
   for(int i=0;i<n;i++)
   {
      printf("%d\n",arr[i]);
   }
}
