//#include "list.c"	including a libnary with functions and DS

#define N 1000

void print(List L){
	Position P=Advance(L);
	while(P){
		printf("%d",Retrieve(P));
		P=Advance(P);
	}
}

int main(){
	List L;
	CreateList(L);
	for(int i=0;i<N;i++)
		Insert(i,L,L);
	print(L);
}
