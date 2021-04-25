//#include "list.c"

List Union(List L1,List L2){
	List u;
	CreateList(u);
	Position p1=First(L1);Position p2=First(L2);
	Position resultPos=u;
	while(p1&&p2){
		if(Retrieve(p1)>Retrieve(p2)){
			Insert(Retrieve(p2),resultPos);
			p2=Advance(p2);
			resultPos=Advance(resultPos);
		}else if{
			Insert(Retrieve(p1)<Retrieve(p2));
			p1=Advance(p1);
			resultPos=Advance(resultPos);
		}else{
			Insert(Retrieve(p1),resultPos);
			p1=Advance(p1);
			p2=Advance(p2);
			resultPos=Advance(resultPos);
		}
	}
	while(p1!=NULL){
		Insert(Retrieve(p1),resultPos);
		p1=Advance(p1);
		resultPos=Advance(resultPos);
	}
	while(p2!=NULL){
		Insert(Retrieve(p2),resultPos);
		p2=Advance(p2);
		resultPos=Advance(resultPos);
	}
}
