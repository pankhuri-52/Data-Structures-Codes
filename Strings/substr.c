#include <stdio.h>
#include <string.h>
int main(){
	char str[99];
	printf("Enter the string\n");
	scanf("%s",str);
	char temp[99];
	int k=0;
	for(int i=0;i<strlen(str);i++){
		for(int j=0;j<i;j++){
			temp[k++]=str[j];
		}
	}
	printf("The substrings are\n");
	for(int i=1;i<=strlen(str);i++){
		for(int j=0;j<=strlen(str)-i;j++){
                            int d=j+i-1;
			    for(int k=j;k<=d;k++){
				    printf("%c",str[k]);
			    }
		 printf("\n");
		}
	}
	return 0;
}
