#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 20
int stack[SIZE],top=-1;
void push(int data){
	if(top>SIZE){
		printf("Overflow");
		return;
	}
	top++;
	stack[top]=data;
}
int pop(){
	if(top<0){
		printf("Underflow");
		return -1;
	}
	int temp=stack[top];
	top--;
	return temp;
}
bool empty(){
	if(top<0)
	   return true;
	else
	   return false;
}
int peek(){
	return stack[top];
}
void printPattern(char str[]){
	char result[20];
    int k=0;
    for (int i=0;i <=strlen(str);i++)
    {
        push(i + 1);
        if (i==strlen(str) || str[i] == 'I')
        {
            while (empty()==false)
            {
                result[k++]= peek()+'0';
                pop();
            }
        }
    }
    for(int i=0;i<strlen(result);i++){
	    printf("%c",result[i]);
    }
}
int main(int argc,const char *argv[]){
	char str[20];
	strcpy(str,argv[1]);
	printPattern(str);
	return 0;
}
