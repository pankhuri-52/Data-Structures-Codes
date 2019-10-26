#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d",&x);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	int low=0;
	int high=n-1;
	int flag=0;
	int mid;
	while(low<high)
	{
		mid=(low+high)/2;
		if(x==a[mid])
		{
			flag=1;
			break;
		}
		else if(x<a[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	if(flag==1)
		printf("Key is found at %d",mid+1);
	else
		printf("Not found");
	return 0;
}
