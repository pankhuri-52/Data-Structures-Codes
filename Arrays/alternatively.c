#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
           scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
	  for(int j=i+1;j<n;j++)
	  {
	     if(arr[i]>arr[j])
	     {
		     int temp=arr[i];
		     arr[i]=arr[j];
		     arr[j]=temp;
	    }
	  }
	}
	int left=1;
	int high=0;
	while(arr[high]<0)
		high++;
	int right=high;
	while(arr[left]<0 && right<n)
	{
		int temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
		left=left+2;
		right++;
	}
	for(int i=0;i<n;i++)
	{
            printf("%d\t",arr[i]);
	}
}
