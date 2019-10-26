#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
        for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf("Element is present at index %d",i);
		}
		return 0;
	}
}
