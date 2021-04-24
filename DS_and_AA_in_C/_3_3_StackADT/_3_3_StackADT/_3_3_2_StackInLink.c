//
//  _3_3_2_StackInLink.c
//  _3_3_StackADT
//
//  Created by mac on 2021/4/24.
//

#include "_3_3_2_StackInLink.h"

struct Node{
    ElementType Element;
    PtrToNode Next;
};

int IsEmpty(Stack S){
    return S->Next==NULL;
}
void Push(ElementType X,Stack S){
    PtrToNode TmpCell;
    TmpCell=malloc(sizeof(struct Node));
    if(TmpCell==NULL)printf("Out of space!!!");
    else{
        TmpCell->Element=X;
        TmpCell->Next=S->Next;
        S->Next=TmpCell;
    }
}
void Pop(Stack S){
    PtrToNode FirstCell;
    if(IsEmpty(S))printf("Empty Stack");
    else{
        FirstCell=S->Next;
        S->Next=S->Next->Next;
        free(FirstCell);
    }
}
void MakeEmpty(Stack S){
    if(S==NULL)printf("Must use CreateStack first");
    else
        while(!IsEmpty(S))
            Pop(S);
}
ElementType Top(Stack S){
    if(!IsEmpty(S))return S->Next->Element;
    printf("Empty stack");
    return 0;
}
Stack CreateStack(void){
    Stack S;
    S=malloc(sizeof(struct Node));
    if(S==NULL)printf("Out of space!!!");
    S->Next=NULL;
    MakeEmpty(S);
    return S;
}
