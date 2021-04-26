#include <stdio.h>

char stack[512];
int top=0;

void push(char c);
char pop(void);
int isEmpty(void);

int main(){
	push('a');
	push('b');
	push('c');
	
	while(!isEmpty()){
		putchar(pop());
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
