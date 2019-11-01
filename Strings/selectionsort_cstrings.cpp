#include <iostream>
#include <cstring>
using namespace std;
void selectionsort(char *str[99],int k){
	int min=0;
	char temp[99];
	for(int i=0;i<k-1;i++){
		min=i;
		for(int j=i+1;j<k;j++){
			if(strcmp(str[j],str[min])<0){
				min=j;
			}
		}
		if(min!=i){
			strcpy(temp,str[min]);
			strcpy(str[min],str[i]);
			strcpy(str[i],temp);
		}
	}
}
int main(int argc,char** argv){
     char *str[99];
     int k=0;
     for(int i=1;i<argc;i++){
          str[k++]=argv[i];
     }
     selectionsort(str,k);
     for(int i=0;i<k;i++){
	     cout<<str[i]<<" ";
     }
     cout<<endl;
}
