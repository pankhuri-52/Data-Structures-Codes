#include <stdio.h>
#include <string.h>
int main(){
	char str[99];
	printf("Enter the string\n");
	scanf("%s",str);
	int count;
	int count1=0;
	int index;
	for(int i=0;i<strlen(str);i++){
		 count=0;
		 for(int j=i+1;j<strlen(str);j++){
			 if(str[i]==str[j])
				 count++;
		 }
		 if(count>count1){
			 count1=count;
			 index=i;
		 }
	}
	printf("Maximum occuring character in the string is\n");
	for(int i=0;i<strlen(str);i++){
		if(i==index)
			printf("%c",str[i]);
	}
	return 0;
}
