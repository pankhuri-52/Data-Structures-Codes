#include <stdio.h>
#include <string.h>
int main(){
       	char str[99]="Abby ping pong";
	printf("%s",str);
	printf("\n");
	char addstr[99];
	char temp[99];
	int k=0;
	printf("Enter the string which you want to add\n");
	scanf("%s",addstr);
	int index;
	printf("Enter the index at which you want to add this string\n");
	scanf("%d",&index);
	for(int i=0;i<strlen(str);i++){
		temp[k++]=str[i];
		if(i==index){ 
                     strcat(temp,addstr);
		    /* printf("%s",temp);*/
		     k=k+i+1;
		     temp[k++]=' ';
		     continue;
		}
		else 
			continue;
	}
	printf("\n");
	printf("%s",temp);
	return 0;
}
