//
//  Cursor.h
//  _3_2_ListADT
//
//  Created by mac on 2021/4/24.
//

#ifndef Cursor_h
#define Cursor_h

#include <stdio.h>

typedef int PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

typedef int ElementType;

void InitializeCursorSpace(void);

List MakeEmpty(List L);
int IsEmpty(const List L);
int IsLast(Position P,const List L);
Position Find(ElementType X, const List L);
void Delete(ElementType X, const List L);
Position FindPrevious(ElementType X, const List L);
void Insert(ElementType X,List L,Position P);
void DeleteList(List L);
Position Header(const List L);
Position First(const List L);
Position Advance(const Position P);
ElementType Retrieve(const Position P);

#endif /* Cursor_h */
