#include <stdio.h>
#include <string.h>
char stack[512];
int top=0;

void push(char c);
char pop(void);
int isEmpty(void);
int is_palindrom(char *pt);

int main(){
	char str[100];
	
	printf("Please enter a string:");	
	gets(str);
	
	if(is_palindrom(str))printf("true\n");
	else printf("false\n");	

	return 0;
}

void push(char c){
	stack[top++]=c;
}
char pop(void){
	return stack[--top];
}
int isEmpty(void){
	return top==0;
}
int is_palindrom(char *pt){
	int len,i;
	len=strlen(pt);
	for(i=0;i<len/2;i++)
		push(pt[i]);
	if(len%2==1)
		i++;
	while(!isEmpty()){
		if(pop()==pt[i])i++;
		else return 0;
	}
	return 1;
}
