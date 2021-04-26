#ifndef LINKLIST_H_
#define LINKLIST_H_

struct node{
	unsigned char elem;
	struct node *next;
};

void create_list(unsigned char elem);
void insert_list(int pos,unsigned char elem);
void delete_node(int pos);
void print_linklist(void);
int search(unsigned char elem);

#endif
