#ifndef _HashQuad_H

typedef unsigned int Index;
typedef Index Posiiton;

struct HashTbl;
typedef struct HashTbl *HashTable;

typedef int ElementType;

HashTable InitializeTable(int TableSize);
void DestroyTable(HashTable H);
Position Find(ElementType Key,HashTable H);
void Insert(ElementType Key,HashTable H);
ElementType Retrieve(Position P,HashTable H);
HashTable Rehash(HashTable H);

#endif

