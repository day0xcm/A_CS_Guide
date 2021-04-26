#ifndef LINKLIST_H_
#define LINKLIST_H_

#include <stdio.h>

extern struct node *head;
extern struct node *tail;
struct node{
	unsigned int elem;
	struct node *next;
};

void create_list(unsigned int elem);
void insert_list(int pos,unsigned int elem);
void delete_node(int pos);
void print_linklist(struct node *linklist_head);
int search(unsigned int elem);

#endif
