//
//  StackRecord.h
//  Stack
//
//  Created by mac on 2021/4/23.
//

#ifndef StackRecord_h
#define StackRecord_h

#include <stdio.h>

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
ElementType TopAndPop(Stack S);

#endif /* StackRecord_h */
