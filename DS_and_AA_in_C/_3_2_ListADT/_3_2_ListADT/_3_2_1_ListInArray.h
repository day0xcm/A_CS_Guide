//
//  _3_2_1_ListInArray.h
//  _3_2_ListADT
//
//  Created by mac on 2021/4/24.
//

#ifndef _3_2_1_ListInArray_h
#define _3_2_1_ListInArray_h

#include <stdio.h>
#include <stdlib.h>
#define MaxSize 5   /* a special circumstance */

typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef int ElementType;    /* a special circumstance */
struct Node{
    int Size;
    ElementType Data[MaxSize];
};

List MakeEmpty(void);
int Find(ElementType X,List PtrL);
void Insert(ElementType X,int i,List PtrL);   
void Delete(int i,List PtrL);

#endif /* _3_2_1_ListInArray_h */
