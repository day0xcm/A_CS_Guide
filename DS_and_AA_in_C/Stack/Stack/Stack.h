//
//  Stack.h
//  Stack
//
//  Created by mac on 2021/4/23.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

typedef int ElementType;

int IsEmpty(Stack S);
Stack CreateStack(void);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X,Stack S);
ElementType Top(Stack S);
void Pop(Stack S);

#endif /* Stack_h */
