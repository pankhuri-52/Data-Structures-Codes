#include <stdio.h>
#include <string.h>
int main(){
	char str1[99];
	char str2[99];
	printf("Enter the first string\n");
	scanf("%s",str1);
	printf("Enter the second string\n");
	scanf("%s",str2);
	char temp[99];
	strcpy(temp,str1);
	strcpy(str1,str2);
	strcpy(str2,temp);
	printf("After swapping\n");
	printf("The first string becomes %s\n",str1);
	printf("The second string becomes %s\n",str2);
	return 0;
}
