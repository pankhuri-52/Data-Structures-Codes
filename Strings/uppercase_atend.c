#include <stdio.h>
#include <string.h>
int main(){
	char str[99];
	printf("Enter the string\n");
	scanf("%s",str);
	char temp[99];
	char temp1[99];
	int x=0;
	int k=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]>=65 && str[i]<=90){
			temp[k++]=str[i];
		}
		else
		{
			temp1[x++]=str[i];
		}
	}
	strcat(temp1,temp);
	printf("%s",temp1);
	return 0;

}
