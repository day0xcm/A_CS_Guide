void PrintLots(List L,List P){
	int i=1;
	Position Lpos,Ppos;
	Lpos=Advance(L);
	Ppos=Advance(P);
	while(Ppos!=NULL&&Lpos!=NULL){
		int num=Retrieve(Ppos);
		for(;i<num;i++)Lpos=Advance(Lpos);
		printf("%d\n",Retrieve(Lpos));
		Ppos=Advance(Ppos);
	}
}
