#include <stdio.h>
#include <string.h>
int main(){
	char str1[99];
	char str2[99];
	printf("Enter the first string\n");
	scanf("%s",str1);
	printf("Enter the second string\n");
	scanf("%s",str2);
        if(strlen(str1)!=strlen(str2))
		printf("The two strings are not equal\n");
	else
	{
		int flag=0;
            for(int i=0,j=0;i<strlen(str1),j<strlen(str2);i++,j++){
		    if((int)str1[i]==(int)str2[j])
			    continue;
		    else if(((int)str1[i]-(int)str2[j])>0)
		    {
			    flag=1;
			    break;
		    }
		    else if(((int)str1[i]-(int)str2[j])<0)
		    {
			    flag=2;
			    break;
		    }
	    }
	    if(flag==1)
		    printf("String1 is less than String2");
	    if(flag==2)
		    printf("String2 is greater than String1");
	}
	return 0;

}
