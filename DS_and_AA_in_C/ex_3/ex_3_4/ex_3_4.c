#include "list.c"

List Intersect(List L1,List L2){
	List intersect;
	CreateList(intersect);
	Position p1=First(L1);
	Position p2=First(L2);
	Position resultPos=intersect;
	while(p1&&p2){
		if(Retrieve(p1)>Retrieve(p2))p2=Advance(p2);
		else if(Retrieve(p1)<Retrieve(p2))p1=Advance(p1);
		else{
			Insert(Retrieve(p1),resultPos);
			p1=Advance(p1);
			p2=Advance(p2);
			resultPos=Advance(resultPos);
		}
	}
	return intersect;
}

int main(){
	List L,P;
	CreateList(L);
	CreateList(P);
	for(int i=20;i>=0;i--)Insert(i,L);
	for(int i=20;i>=0;i-=2)Insert(i,P);
	//print(Intersect(L,P));
}
