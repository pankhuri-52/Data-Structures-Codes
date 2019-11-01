#include <stdio.h>
#include <string.h>
int main(){
	char str1[99];
	printf("Enter the first string\n");
	scanf("%s",str1);
	char str2[99];
	printf("Enter the second string\n");
	scanf("%s",str2);
	char temp[99];
	strcpy(temp,str1);
	strcat(temp,str1);
	char *p=strstr(temp,str1);
	if(strlen(str1)!=strlen(str2))
		printf("The length of strings are not equal\n");
	else
	{
	if(p){
		printf("Yes");
	}
	else
		printf("No");
	}
	return 0;
 }
