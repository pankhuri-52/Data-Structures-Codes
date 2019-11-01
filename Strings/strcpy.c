#include <stdio.h>
#include <string.h>
int main(){
	char str[10];
	char str1[10];
	     printf("Enter the string1\n");
	     scanf("%s",str);
	     printf("Enter the string2\n");
	     scanf("%s",str1);
	     if(strlen(str)==strlen(str1))
	     {
	     for(int i=0,j=0;i<strlen(str1),j<strlen(str1);i++,j++){
			     str[i]=str1[j];
	     }
	     printf("After copying string2 to string1\n");
             printf("%s",str);

	     }
	     else
		     printf("The length of two strings are not equal\n");
	return 0;
}
