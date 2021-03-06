#include <stdio.h>
#include "linklist.h"

int main(){
	struct node *head1=NULL;
	struct node *head2=NULL;

	create_list(1);
	create_list(9);	
	create_list(13);	
	create_list(27);	
	head1=head;
	print_linklist(head1);
	head=NULL;

	create_list(3);
	create_list(5);	
	create_list(14);	
	create_list(81);	
	create_list(88);	
	create_list(95);	
	create_list(99);	
	head2=head;
	print_linklist(head2);
	head=NULL;

	struct node *p=NULL,*q=NULL;
	p=head1;q=head2;
	
	while(p&&q){
		if(p->elem<q->elem){
			if(head==NULL)
				head=p;
			else
				tail->next=p;
			tail=p;
			p=p->next;			
		}else{
			if(head==NULL)
				head=q;
			else 
				tail->next=q;
			tail=q;
			q=q->next;
		}
	}	
	
	tail->next=(p?p:q);

	print_linklist(head);

	return 0;	
}
