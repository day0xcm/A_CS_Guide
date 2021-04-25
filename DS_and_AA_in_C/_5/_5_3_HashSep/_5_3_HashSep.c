#include "_5_3_HashSep.h"

struct listNode{
	ElementType Element;
	Position Next;
};

typedef Position List;

struct HashTbl{
	int TableSize;
	List *TheLists;
};

HashTable Initialize=Table(int TableSize){
	HashTable H;
	int i;
	if(TableSize<MinTableSize){
		printf("Table size too small");
		return NULL;
	}
	H=malloc(sizeof(struct HashTbl));
	if(H==NULL)printf("Out of space!!!");
	H->TableSize=NextPrime(TableSize);
	H->TheLists=malloc(sizeof(List)*H->TableSize);
	if(H->TheLists==NULL)printf("Out of sapce!!!");
	for(i=0;i<H->TableSize;i++){
		H->TheLists[i]=malloc(sizeof(struct ListNode));
		if(H->TheLists[i]==NULL)printf("Out of space!!!");
		else H->TheList[i]->Next=NULL;
	}
	return H;
}
Position Find(ElementType Key,HashTable H){
	Position P;
	List L;
	L=H->TheLists[Hash(Key,H->TableSize)];
	P=L->Next;
	while(P!=NULL&&P->Element!=Key)
		P=P->Next;
	return P;
}
void Insert(ElementType Key,HashTable H){
	Position Pos,NewCell;
	List L;
	Pos=Find(Key,H);
	if(Pos==NULL){
		NewCell=malloc(sizeof(struct ListNode));
		if(NewCell==NULL)printf("Out of space!!!");
		else{
			L=H->TheLists[Hash(Key,H->TableSize)];
			NewCell->Next=L->Next;
			NewCell->Element=Key;
			L->Next=NewCell;
		}
	}
}

