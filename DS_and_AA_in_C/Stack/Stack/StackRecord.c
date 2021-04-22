//
//  StackRecord.c
//  Stack
//
//  Created by mac on 2021/4/23.
//

#include "StackRecord.h"
#include <stdlib.h>

#define EmptyTOS (-1)
#define MinStackSize (5)

struct StackRecord{
    int Capacity;
    int TopOfStack;
    ElementType *Array;
};

Stack CreateStack(int MaxElements){
    Stack S;
    if(MaxElements<MinStackSize)
        printf("Stack size is too small");
    S=malloc(sizeof(struct StackRecord));
    if(S==NULL)
        printf("Out of space!!!");
    S->Array=malloc(sizeof(ElementType)*MaxElements);
    if(S->Array==NULL)
        printf("Out of space!!!");
    S->Capacity=MaxElements;
    MakeEmpty(S);
    return S;
}
void DisposeStack(Stack S){
    if(S!=NULL){
        free(S->Array);
        free(S);
    }
}
int IsEmpty(Stack S){
    return  S->TopOfStack==EmptyTOS;
}
void MakeEmpty(Stack S){
    S->TopOfStack=EmptyTOS;
}
void Push(ElementType X,Stack S){
    if(IsFull(S))
        printf("Full stack");
    else
        S->Array[++S->TopOfStack]=X;
}
ElementType Top(Stack S){
    if(!IsEmpty(S))
        return S->Array[S->TopOfStack];
    printf("Empty stack");
    return 0;
}
void Pop(Stack S){
    if(IsEmpty(S))
        printf("Empty stack");
    else
        S->TopOfStack--;
}
ElementType TopAndPop(Stack S){
    if(!IsEmpty(S))
        return S->Array[S->TopOfStack--];
    printf("Empty stack");
    return 0;
}
