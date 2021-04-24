//
//  _3_2_2_ListinLink.h
//  _3_2_ListADT
//
//  Created by mac on 2021/4/24.
//

#ifndef _3_2_2_ListInLink_h
#define _3_2_2_ListInLink_h

#include <stdio.h>
#include <stdlib.h>

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef int ElementType;

List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P, List L);
Position Find(ElementType X, List L);
void Delete(ElementType X, List L);
Position FindPrevious(ElementType X, List L);
void Insert(ElementType X, List L, Position P);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);

#endif /* _3_2_2_ListInLink_h */
