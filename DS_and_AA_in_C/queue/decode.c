#include <stdio.h>
#include <string.h>
#define SIZE 512

char queue[SIZE];
int head=0,tail=0;

void enqueue(char c);
char dequeue(void);
int is_empty(void);
int is_full(void);

int main(){
	char code[10];
	int n;
	int i=0;
	char num;

	printf("Please enter a code:");
	gets(code);

	for(n=0;n<strlen(code);n++)
		if(!is_full())
			enqueue(code[n]);

	while(!is_empty()){
		code[i++]=dequeue();
		if(!is_empty()){
			num=dequeue();
			if(!is_full())
				enqueue(num);
		}
	}
	printf("Orignal code is: ");
	for(i=0;i<strlen(code);i++)
		printf("%c",code[i]);
	printf("\n");

	return 0;
}

void enqueue(char c){
	queue[tail]=c;
	tail=(tail+1)%SIZE;
}

char dequeue(void){
	char ch;
	ch=queue[head];
	head=(head+1)%SIZE;
	return ch;
}

int is_empty(void){
	return head==tail;
}

int is_full(void){
	return (tail+1)%SIZE==head;
}
