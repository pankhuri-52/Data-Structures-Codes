#include <stdio.h>
#include <string.h>
int main(){
	char str[99];
	printf("Enter the string\n");
	scanf("%s",str);
	printf("After reversing\n");
	for(int i=strlen(str)-1;i>=0;i--){
		printf("%c",str[i]);
	}
	return 0;
}
