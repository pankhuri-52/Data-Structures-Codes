#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t!=0){
	   
	   int n;
	   scanf("%d",&n);
	   int m;
	   scanf("%d",&m);
	   
	   int arr[n][m];
	   for(int i=0;i<n;i++){
	       for(int j=0;j<m;j++){
	           scanf("%d",&arr[i][j]);
	       }
	   }
	   
	   int x1,y1;
	   int x2,y2;
	   scanf("%d",&x1);
	   scanf("%d",&y1);
	   scanf("%d",&x2);
	   scanf("%d",&y2);
	   int sum=0;
	   for(int i=x1-1;i<=x2-1;i++){
	       for(int j=y1-1;j<=y2-1;j++){
	           sum=sum+arr[i][j];
	       }
	   }
	   
	   printf("%d\n",sum);
	    t--;
	}
	
	return 0;
}
