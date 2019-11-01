#include <stdio.h>
#include <string.h>
int main(){
	char str[99];
	printf("Enter the string\n");
	scanf("%s",str);
	int count=0;
	for(int i=0;str[i]!='\0';i++){
		count++;
	}
	printf("The length of the string is:\n");
	printf("%d",count);
	return 0;
}
