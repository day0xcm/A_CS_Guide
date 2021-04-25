void SwapWithNext(Position BeforeP,List L){
	Position p1=Advance(BeforeP);
	Position p2=Advance(p1);
	BeforeP->Next=p2;
	p1->Next=Advance(p2);
	p2->Next=p1;
}

void SwapwithNextDul(Position P,List L){
	Position beforeP1,afterP2,p1,p2;
	p1=P;
	p2=Advance(p1);
	afterP2=Advance(p2);
	beforeP1=Retreat(p1);
	
	beforeP1->Next=p2;
	p2->Next=p1;
	p1->Next=afterP2;
	afterP2->Pre=p1;
	p1->Pre=p2;
	p1->Pre=beforeP1;
}
