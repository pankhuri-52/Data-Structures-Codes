#include <stdio.h>
#include <stdlib.h>
int main(void){
	int arr[]={4,2,3,1};
	int *ptr=arr;
	for(int i=0;i<4;i++){
		printf("%d",*(ptr+i));
	}
	return 0;
}
