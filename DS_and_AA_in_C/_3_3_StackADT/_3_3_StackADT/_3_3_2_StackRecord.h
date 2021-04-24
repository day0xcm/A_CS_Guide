//
//  _3_3_2_StackRecord.h
//  _3_3_StackADT
//
//  Created by mac on 2021/4/24.
//

#ifndef _3_3_2_StackRecord_h
#define _3_3_2_StackRecord_h

#include <stdio.h>
#include <stdlib.h>

struct StackRecord;
typedef struct StackRecord *Stack;

typedef int ElementType;

int IsEmpty(Stack S);
int IsFull(Stack S);
Stack CreateStack(int MaxElements);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X,Stack S);
ElementType Top(Stack S);
void Pop(Stack S);

#endif /* _3_3_2_StackRecord_h */
