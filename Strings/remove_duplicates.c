#include <stdio.h>
#include <string.h>
int main(){
	char str[99];
	printf("Enter the string\n");
	scanf("%s",str);
	for(int i=0;i<strlen(str);i++){
		for(int j=i+1;j<strlen(str);j++){
			if(str[i]==str[j])
				str[j]=-99;
		}
	}
	printf("After removing duplicates\n");
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=-99)
			printf("%c",str[i]);
	}
	return 0;
}
