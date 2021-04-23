//
//  Queue.c
//  Queue
//
//  Created by mac on 2021/4/23.
//

#include "Queue.h"

#define MinQueueSize (5)

struct QueueRecord{
    int Capacity;
    int Front;
    int Rear;
    int Size;
    ElementType *Array;
};

int IsEmpty(Queue Q){
    return Q->Size==0;
}
void MakeEmpty(Queue Q){
    Q->Size=0;
    Q->Front=1;
    Q->Rear=0;
}
static int Succ(int Value,Queue Q){
    if(++Value==Q->Capacity)
        Value=0;
    return Value;
}
void Enqueue(ElementType X,Queue Q){
    if(IsFull(Q))
        printf("Full queue");
    else{
        Q->Size++;
        Q->Rear=Succ(Q->Rear, Q);
        Q->Array[Q->Rear]=X;
    }
}
