ifndef _3_2_5_DoubleList_H
define _3_2_5_DoubleList_H

typedef int ElementType;

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode DoubleList;
typedef PtrToNode Position;

DoubleList CreateList();
DoubleList MakeEmpty(DoubleList L);
int IsEmpty(DoubleList L);
int IsLast(Position P);
Position Find(ElementType X,DoubleList L);
void DeleteElementType(ElementType X,DoubleList L);
void DeletePosition(Position P);
void Insert(ElementType X,Position P);
void DeleteList(DoubleList L);
Position Header(DoubleList L);
Position Advance(Position P);
Position Retreat(Position P);
ElementType Retrieve(Position P);

#endif
