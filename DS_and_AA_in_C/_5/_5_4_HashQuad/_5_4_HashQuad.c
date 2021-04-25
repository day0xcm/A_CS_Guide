#include "_5_4_HashQuad.h"

enum KindOfEntry{Legitimate,Empty,Deleted};

struct HashEntry{
	ElementType Element;
	enum KindOfEntry Info;
};

typedef struct HashEntry Cell;

struct HashTbl{
	int TableSize;
	Cell *TheCells;
};

HashTable InitializeTable(int TableSize){
	HashTable H;
	int i;
	if(TableSize<MinTableSize){
		printf("Table size too small");
		return NULL;
	}
	H=malloc(sizeof(struct HashTbl));
	if(H==NULL)printf("Out of space!!!");
	H->TableSize=NextPrime(TableSize);
	H->TheCells=malloc(sizeof(Cell)*H->TableSize);
	if(H->TheCells==NULL)printf("Out of space!!!");
	for(i=0;i<H->TableSize;i++)
		H->TheCells[i].Info=Empty;
	return H;
}
Position Find(ElementType Key,HashTable H){
	Position CurrentPos;
	int CollisionNUm;
	CollisionNUm=0;
	CurrentPos=Hash(Key,H->TableSize);
	while(H->TheCells[CurrentPos].Info!=Empty&&
		H->TheCells[CurrentPos].Element!=Key){
		CurrentPos+=2*++CollisionNUm-1;
		if(CurrentPos>=H->TableSize)
			CurrentPos-=H->TableSize;
	}	
	return CurrentPos;
}
void Insert(ElementType Key,HashTable H){
	Position Pos;
	Pos=Find(Key,H);
	if(H->TheCells[Pos].Info!=Legitimate){
		H->TheCells[Pos].Info=Legitimate;
		H->THeCells[Pos].Element=Key;
	}
}
