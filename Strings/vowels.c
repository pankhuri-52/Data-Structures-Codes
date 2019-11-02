#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void check_vowels(char str[]){
	char temp[99];
	int k=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
			temp[k++]=str[i];
	}
               if(temp[0]=='a' && temp[1]=='e' && temp[2]=='i' && temp[3]=='o' && temp[4]=='u')
		       printf("sorted");
              else 
		printf("unsorted\n");
	
}
int main(int argc,const char *argv[]){
	char str[20];
	strcpy(str,argv[1]);
	check_vowels(str);
	return 0;
}
