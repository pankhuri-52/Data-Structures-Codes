#include <stdio.h>
#include <string.h>
int main(){
	char str1[99];
	printf("Enter the first string\n");
	scanf("%s",str1);
	char str2[99];
	printf("Enter the second string\n");
	scanf("%s",str2);
	for(int i=0;i<strlen(str1);i++){
		for(int j=0;j<strlen(str2);j++){
			if(str1[i]==str2[j])
				str1[i]=-99;
		}
	}
	for(int i=0;i<strlen(str1);i++){
		if(str1[i]!=-99)
			printf("%c",str1[i]);
	}
	return 0;
}
