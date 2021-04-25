#include "AvlTree.h"

struct AvlNode{
	ElementType Element;
	AvlTree Left;
	AvlTree Right;
	int Height;
};

static int Height(Position P){
	if(P==NULL)return -1;
	else return P->Height;
}
AvlTree Insert(ElementType X,AvlTree T){
	if(T==NULL){
		T=malloc(sizeof(struct AvlNode));
		if(T==NULL)printf("Out of space!!!");
		else{
			T->Element=X;
			T->Height=0;
			T->Left=T->Right=NULL;
		}
	}else if(X<T->Element){
		T->Right=Insert(X,T->Right);
		if(Height(T->Right)-Height(T->Left)==2)
			if(X>T->Right->Element)
				T=SingleRotateWithRight(T);
			else T=DoubleRotateWithRight(T);
	}
	T->Height=Max(Height(T->Left),Height(T->Right))+1;
	return T;
}
static Position SingleRotateWithLeft(Position K2){
	Position K1;
	K1=K2->Left;
	K2->Left=K1->Right;
	K1->Right=K2;
	K2->Height=Max(Height(K2->Left),Height(K2->Right))+1;
	K1->Height=Max(Height(K1->Left),K2->Height)+1;
	return K1;
}
static Position DoubleRotateWithLeft(Position K3){
	K3->Left=SingleRotateWithRight(K3->Left);
	return SingleRotateWithLeft(K3);
}

