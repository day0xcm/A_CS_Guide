#include <stdio.h>
#include <string.h>
char stack[512];
int top=0;

void push(char c);
char pop(void);
int isEmpty(void);

int main(){
	char str[100];
	int i,len;
	printf("please enter a expression:\n");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]=='(')continue;
		else if(str[i]>='0'&&str[i]<='9')printf("%c",str[i]);
		else if(str[i]=='+'||str[i]=='-'||str[i]=='*')push(str[i]);
		else if(str[i]==')')printf("%c",pop());
	}	
	putchar('\n');
	return 0;
}

void push(char c){
	stack[top++]=c;
}
char pop(void){
	return stack[--top];
}
int isEmpty(void){
//	return top==0?1:0;
	return top==0;
}
