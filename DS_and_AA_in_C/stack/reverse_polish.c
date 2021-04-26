#include <stdio.h>
#include <string.h>

int stack[512];
int top=0;

void push(int c);
int pop(void);
int isEmpty(void);

int main(){
	int n,n1,n2,i;
	char a[100];
	printf("Please enter a reverse polish expression:\n");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]>='0'&&a[i]<='9')
			push(a[i]-'0');
		else{
			n2=pop();
			n1=pop();
			switch(a[i]){
			case '+':
				push(n1+n2);
				break;
			case '-':
				push(n1-n2);
				break;
			case '*':
				push(n1*n2);
				break;		
			}
		}		
	}
	printf("result=%d\n",pop());
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
