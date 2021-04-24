//
//  _3_2_7_PolynomialInLink.c
//  _3_2_ListADT
//
//  Created by mac on 2021/4/24.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Node *PtrToNode;
struct Node{
    int Coefficient;
    int Exponent;
    PtrToNode Next;
};
typedef PtrToNode Polynomial;

void Attch(int co, int ex, Polynomial *p){
    Polynomial P;
    P=(Polynomial)malloc(sizeof(struct Node));
    P->Coefficient=co;
    P->Exponent=ex;
    (*p)->Next=P;
    *p=P;
}
Polynomial PolyAdd(Polynomial P1,Polynomial P2){
    Polynomial front,rear,temp;
    int sum;
    rear=(Polynomial)malloc(sizeof(struct Node));
    front=rear;
    while(P1 && P2){
        if(P1->Exponent>P2->Exponent){
            Attch(P1->Coefficient, P1->Exponent, &rear);
            P1=P1->Next;
        }else if(P1->Exponent<P2->Exponent){
            Attch(P2->Coefficient, P2->Exponent, &rear);
            P2=P2->Next;
        }else{
            sum=P1->Coefficient+P2->Coefficient;
            if(sum)Attch(sum, P1->Exponent, &rear);
            P2=P2->Next;
            P1=P1->Next;
        }
    }
    for(;P1;P1=P1->Next)Attch(P1->Coefficient, P1->Exponent, &rear);
    for(;P2;P2=P2->Next)Attch(P2->Coefficient, P2->Exponent, &rear);
    rear->Next=NULL;
    temp=front;
    front=front->Next;
    free(temp);
    return front;
}
Polynomial PolyMult(Polynomial P1,Polynomial P2){
    Polynomial P,rear,t1,t2,t;
    int co,ex;
    if(!P1||!P2)return NULL;
    t1=P1;t2=P2;
    P=(Polynomial)malloc(sizeof(struct Node));
    rear=P;
    while(t2){
        Attch(t1->Coefficient*t2->Coefficient, t1->Exponent+t2->Exponent, &rear);
        t2=t2->Next;
    }
    t1=t1->Next;
    while(t1){
        t2=P2;rear=P;
        while(t2){
            co=t1->Coefficient*t2->Coefficient;
            ex=t1->Exponent+t2->Exponent;
            while(rear->Next && rear->Next->Exponent==0)rear=rear->Next;
            if(rear->Next && rear->Next->Exponent==ex){
                if(rear->Next->Coefficient+co)rear->Next->Coefficient+=co;
                else{
                    t=rear->Next;
                    rear->Next=t->Next;
                    free(t);
                }
            }
            else{
                t=(Polynomial)malloc(sizeof(struct Node));
                t->Coefficient=co;t->Exponent=ex;
                t->Next=rear->Next;
                rear->Next=t;
                rear=rear->Next;
            }
            t1=t1->Next;
        }
        t2=P;
        P=P->Next;
        free(t2);
        return  P;
    }
}
