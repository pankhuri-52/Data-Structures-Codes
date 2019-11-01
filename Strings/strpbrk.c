#include <stdio.h>
#include <string.h>
int main(){
	char str1[99];
	char str2[99];
	printf("Enter the first string\n");
	scanf("%s",str1);
	printf("Enter the second string\n");
	scanf("%s",str2);
	int flag,a;
	for(int i=0;i<strlen(str1);i++){
		flag=0;
		for(int j=0;j<strlen(str2);j++){
			if(str1[i]==str2[j]){
				a=j;
				flag=0;
				break;
			}
			else{
				flag=1;
				continue;
			}
		}
	}
		if(flag==1)
			printf("No character found\n");
		else
			printf("Character found at %d index",a);
		return 0;
}
