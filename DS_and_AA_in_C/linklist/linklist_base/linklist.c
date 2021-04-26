#include "linklist.h"
#include <stdio.h>
#include <stdlib.h>

struct node *head=NULL;
struct node *tail=NULL;

void create_list(unsigned char elem){
	struct node *p=(struct node *)malloc(sizeof(struct node));
	p->elem=elem;
	p->next=NULL;
	
	if(head==NULL)
		head=p;
	else	
		tail->next=p;
	tail=p;
}

void insert_node(int pos,char elem){
	struct node *pre;
	pre=head;
	int i=0;
	struct node *p=(struct node *)malloc(sizeof(struct node));

	if(pos==0){
		p->elem=elem;
		p->next=head;
		head=p;
	}else{
		while(i<pos-1){
			pre=pre->next;
			i++;
		}
	
		p->elem=elem;
		p->next=pre->next;
		pre->next=p;

		if(p->next==NULL)
			tail=p;
	}
}

void delete_node(int pos){
	struct node *pre,*p;
	pre=head;
	int i=0;
	
	if(pos==0){
		head=head->next;
		free(pre);
	}else{	
		while(i<pos-1){
			pre=pre->next;
			i++;
		}	

		p=pre->next;
		pre->next=p->next;
		if(p->next==NULL)tail=pre;
		free(p);
	}
}

void print_linklist(void){
	struct node *p;
	for(p=head;p;p=p->next)
		printf("%c",p->elem);
	printf("\n");
}

int search(unsigned char elem){
	struct node *p;
	for(p=head;p;p=p->next)
		if(p->elem==elem)
			return 1;
	return 0;	
}
