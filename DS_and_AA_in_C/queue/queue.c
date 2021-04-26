#include <stdio.h>

#define SIZE 512

char queue[SIZE];
int head=0,tail=0;

void enqueue(char c);
char dequeue(void);
int is_empty(void);
int is_full(void);

int main(){
	char c='A';
	int i;
	for(i=0;i<3;i++){
		if(!is_full()){
			enqueue(c);
			c++;
		}
	}
	while(!is_empty())
		putchar(dequeue());
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
