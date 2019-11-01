#include <stdio.h>
#include <string.h>
int main(){
	char str1[99];
	char str2[99];
	char temp[99];
	printf("Enter the first string\n");
	scanf("%s",str1);
	printf("Enter the second string\n");
	scanf("%s",str2);
	int k=0;
	for(int i=0;i<strlen(str1);i++){
		temp[k++]=str1[i];
	}
	temp[k++]=' ';
	for(int i=0;i<strlen(str2);i++){
		temp[k++]=str2[i];
	}
	printf("After concatenating two strings\n");
	printf("%s",temp);
	return 0;
}
