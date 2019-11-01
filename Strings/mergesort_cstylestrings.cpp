#include <iostream>
#include <cstring>
using namespace std;
void merge(char *str[99],int left,int mid,int right){
	int i,j,k;
	int n1=mid-left+1;
	int n2=right-mid;
	char *str1[n1];
	char *str2[n2];
	for(int i=0;i<n1;i++){
		str1[i]=str[left+i];
	}
	for(int j=0;j<n2;j++){
              str2[j]=str[mid+1+j];
	}
	i=0;
	j=0;
	k=left;
	while(i<n1 && j<n2){
		if(strcmp(str1[i],str2[j])<=0){
                    str[k]=str1[i];
		    i++;
		}
		else{
		    str[k]=str2[j];
		    j++;
		}
		k++;
	}
	while(i<n1){
		str[k]=str1[i];
		i++;
		k++;
	}
	while(j<n2){
		str[k]=str2[j];
		j++;
		k++;
	}

}
void mergesort(char *str[99],int left,int right){
	if(left<right){
		int mid=left+(right-left)/2;
		mergesort(str,left,mid);
		mergesort(str,mid+1,right);
		merge(str,left,mid,right);
	}
}
int main(int argc, char** argv){
	char *str[99];
	int k=0;
	for(int i=1;i<argc;i++){
		str[k++]=argv[i];
	}
	mergesort(str,0,k-1);
	cout<<"After implementing merge sort on c style strings"<<endl;
        for(int i=0;i<k;i++){
                cout<<str[i]<<" ";
        }
        cout<<endl;

}
