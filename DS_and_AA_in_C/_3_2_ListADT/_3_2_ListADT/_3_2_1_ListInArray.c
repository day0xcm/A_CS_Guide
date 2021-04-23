//
//  _3_2_1_ListInArray.c
//  _3_2_ListADT
//
//  Created by mac on 2021/4/24.
//

#include "_3_2_1_ListInArray.h"

List MakeEmpty(void){
    List PtrL;
    PtrL=(List)malloc(sizeof(struct Node));
    PtrL->Size=0;
    return PtrL;
}
int Find(ElementType X,List PtrL){
    int i=1;
    while(i<PtrL->Size && X!=PtrL->Data[i-1])++i;
    return i<=PtrL->Size?i:-1;  /* return order not index */
}
void Insert(ElementType X,int i,List PtrL){
    int j;
    if(i<0||i>MaxSize){
        printf("invaild position");
        return;
    }
    if(PtrL->Size-1==MaxSize){
        printf("list is full");
        return;
    }
    for(j=PtrL->Size;j>i;--j)PtrL->Data[j+1]=PtrL->Data[j];
    PtrL->Data[i]=X;
    PtrL->Size++;
}
void Delete(int i,List PtrL){
    int j;
    if(i<0||i>MaxSize){
        printf("invaild position");
        return;
    }
    for(j=i;j<PtrL->Size;++j)PtrL->Data[j]=PtrL->Data[j+1];
    PtrL->Size--;
}


//use for test
/*
int main(){
    List PtrL;
    PtrL=MakeEmpty();
    Insert(1, 1, PtrL);
    printf("%d ",Find(1,PtrL));
    Delete(1, PtrL);
    printf("%d ",Find(1, PtrL));
    return 0;
}
*/
