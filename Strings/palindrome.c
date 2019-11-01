#include <stdio.h>
#include <string.h>
int main(){
	char str[99];
	printf("Enter the string\n");
	scanf("%s",str);
	int low=0;
	int high=strlen(str)-1;
	int mid=low+(high-low)/2;
	int flag=0;
	for(int i=0,j=high;i<mid,j>mid;i++,j--){
		if(str[i]==str[j]){
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		printf("Not a palindrome\n");
	if(flag==1)
		printf("Palindrome\n");
	return 0;
}
