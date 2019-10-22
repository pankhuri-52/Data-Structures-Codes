#include <stdio.h>
#include <stdlib.h>
#define size 10
int stack[size];
int top=-1;
void push(int data){
	if(top>size){
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
void print_stack(){
	while(top!=-1){
		printf("%d",stack[top]);
		top=top-1;
	}
}
int main(int argc,const char *argv[]){
	int n=atoi(argv[1]);
	for(int i=2;i<argc;i++){
            push(atoi(argv[i]));
	}
	print_stack();
	return 0;
}
