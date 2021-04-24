//
//  _3_3_2_StackInLink.h
//  _3_3_StackADT
//
//  Created by mac on 2021/4/24.
//

#ifndef _3_3_2_StackInLink_h
#define _3_3_2_StackInLink_h

#include <stdio.h>
#include <stdlib.h>

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

#endif /* _3_3_2_StackInLink_h */
