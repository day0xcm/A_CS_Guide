#include <stdio.h>
#include <stdlib.h>
struct BinTree_node{
	unsigned char elem;
	struct BinTree_node *ltree,*rtree;	
};

struct BinTree_node *create_bintree(void);

int main(){
	struct BinTree_node *mytree;

	mytree=create_bintree();
		
	return 0;
}

struct BinTree_node *create_bintree(void){
	unsigned char flag;
	struct BinTree_node *tree=(struct BinTree_node *)malloc(sizeof(struct BinTree_node));
	printf("please input the node elem:\n");
	while((tree->elem=getchar())=='\n');
	printf("do you want to insert ltree for %c,(Y/N)\n",tree->elem);
	while((flag=getchar())=='\n');
	if(flag=='Y')tree->ltree=create_bintree();
	else tree->ltree=NULL;
	printf("do you want to insert rtree for %c,(Y/N)\n",tree->elem);
	while((flag=getchar())=='\n');
	if(flag=='Y')tree->rtree=create_bintree();
	else tree->rtree=NULL;
	return tree;
}
