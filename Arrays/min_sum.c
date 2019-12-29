#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	
	while(t!=0){
	    int n;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	    }
	    
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(arr[i]>arr[j]){
	                int temp=arr[i];
	                arr[i]=arr[j];
	                arr[j]=temp;
	            }
	        }
	    }
	    
	    int digit1=0;
	    int digit2=0;
	    for(int i=0;i<n;i++){
	        if(i%2==0)
	        digit1=digit1*10+arr[i];
	        if(i%2!=0)
	        digit2=digit2*10+arr[i];
	    }
	    
	    int sum=digit1+digit2;
	    printf("%d\n",sum);
	    
	    t--;
	}
	return 0;
}
