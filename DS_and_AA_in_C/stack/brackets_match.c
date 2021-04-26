#include <stdio.h>
#include <string.h>
int stack[512];
int top=0;

void push(int c);
int pop(void);
int isEmpty(void);

int main(){
	char str[100];
	int i,len;
	printf("expression:");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]=='(')push(i);
		else if(str[i]==')')printf("%d %d\n",pop(),i);
		else continue;
	}
	return 0;
}

void push(int c){
	stack[top++]=c;
}
int pop(void){
	return stack[--top];
}
int isEmpty(void){
	return top==0;
}
