#include <stdio.h>
void reverse_permutation(int arr[],int n){
    int arr1[n];
    int x=1;
    for(int i=0;i<n;i++){
        arr1[arr[i]-1]=x;
        x++;
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
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
	    reverse_permutation(arr,n);
	    t--;
	}
	return 0;
}
