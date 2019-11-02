#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 20
int stack[SIZE],top=-1;
void push(int data){
        if(top>SIZE){
                //printf("Overflow");
                return;
        }
        top++;
        stack[top]=data;
}
int pop(){
        if(top<0){
                //printf("Underflow");
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
void check(char str[]){
        for(int i=0;i<strlen(str);i++){
                if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='O' || str[i]=='U'){
                        push(str[i]);
  }
        }
        int flag=1;
        char temp1=peek();
                pop();
            char temp2=peek();
                pop();
        while(empty()==false){
            
                if(temp1>=temp2){
                        flag=1;
                        temp1=temp2;
                        temp2=pop();
                } else {
                        flag=0;
                        break;
                }
        }
        if(flag==0)
                printf("unsorted");
        else
                printf("sorted");
}
int main(int argc,const char *argv[]){
        char str[20];
        strcpy(str,argv[1]);
        check(str);
}

