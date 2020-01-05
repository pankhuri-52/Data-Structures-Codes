#include <stdio.h>
void max_value(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    printf("%d\n",max);
}
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
	    max_value(arr,n);
	    t--;
	}
	return 0;
}
