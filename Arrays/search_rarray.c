#include <stdio.h>
#include <stdlib.h>
 int main()
 {
  int n;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements\n");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  int x;
  printf("Enter the number of rotations\n");
  scanf("%d",&x);
  char s;
  printf("Enter r for right rotation and l for left rotation\n");
  scanf(" %c",&s);
  char ch='r';
  if((int)s==114)
  {
        for(int i=0;i<x;i++)
        {
          int temp=arr[n-1];
          for(int j=n-1;j>0;j--)
          {
                arr[j]=arr[j-1];
          }
          arr[0]=temp;
        }
        for(int i=0;i<n;i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n");
        printf("Enter the key element which you want to search\n");
        int key;
        scanf("%d",&key);
        int y=n-x;
        for(int i=0;i<x;i++)
        {
            int temp=arr[0];
            for(int j=0;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[n-1]=temp;
        }
        int low=0;
        int high=n-1;
        int flag=0;
        int mid;
        for(int i=0;i<n;i++)
        {
          printf("%d\t",arr[i]);
        }
        while(low<=high)
        {
            mid=low + (high - low) / 2;
            if(key==arr[mid])
            {
                flag=1;
                break;
            }
            if(key<arr[mid])
                {
                        high=mid-1;
                }
            if(key>arr[mid])
            {
                    low=mid+1;
            }
        }
        if(flag==1)
                {printf("Key is found");}
        else
            {printf("Key is not found");}
     }
     else if((int)s==108)
     {
       for(int i=0;i<x;i++)
       {
         int temp=arr[0];
         for(int j=0;j<n-1;j++)
         {
           arr[j]=arr[j+1];
         }
         arr[n-1]=temp;
       }
       for(int i=0;i<n;i++)
       {
         printf("%d\t",arr[i]);
       }
     }
    return 0;
  }
