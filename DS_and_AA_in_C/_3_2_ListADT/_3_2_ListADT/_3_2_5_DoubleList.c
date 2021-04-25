#include "_3_2_5_DoubleList.h"
#include <stdlib.h>
#include <stdio.h>

struct Node{
	ElementType Element;
	Position Next;
	Position Pre;
};

DoubleList CreateList(){
	DoubleList l=malloc(sizeof(struct Node));
	l->Pre=NULL;
	l->Next=NULL;
	return l;
}
DoubleList MakeEmpty(DoubleList L){
	if(L!=NULL)DeleteList(L);
	L=malloc(sizeof(struct Node));
	if(L==NULL)printf("Out of memory");
	L->Next=NULL;
	L->Pre=NULL;
	return L;
}
int IsEmpty(DoubleList L){
	return L->Next==NULL;
}
int IsLast(Position P){
	return P->Next==NULL;
}
Position Find(ElementType X,DoubleList L){
	Position P;
	P=L->Next;
	while(P!=NULL&&P->Element!=X)
		P=P->Next;
	return P;
}
void DeleteElementType(ElementType X,DoubleList L){
	Position P;
	P=Find(X,L);
	DeletePosition(P);
}
void DeletePosition(Position P){
	if(P!=NULL){
		Position last,next;
		last=P->Pre;
		next=P->Next;
		last->Next=next;
		if(!IsLast(P))next->Pre=last;
		free(P);
	}
}
void Insert(ElementType X,Position P){
	Position tmpCell;
	tmpCell = malloc(sizeof(struct Node));
	if(tmpCell==NULL)printf("Out of space!!!");
	Position temp=P->Next;
	P->Next=tmpCell;
	tmpCell->Next=temp;	
	tmpCell->Pre=P;
	tmpCell->ElementType=X;
	if(temp!=NULL)temp->Pre=tempCell;
}
void DeleteList(DoubleList L){
	Position P;
	P=L->Next;
	L->Next=NULL;
	while(P!=NULL){
		Position tmp;
		tmp=P->Next;
		free(P);
		P=tmp;
	}
}
Position Header(DoubleList L){
	return L;
} 
Position First(DoubleList L){
	return L->Next;
}
Position Advance(Position P){
	return P->Next;
}
Position Retreat(Position P){
	return P->Pre;
}
ElementType Retrieve(Position P){
	return P->Element;
}
