#include <stdio.h>
#include <math.h>

#define MAX 1000

int Powers[MAX];

int main(){
	int x,n,cnt,i;
	int ans=1;
	scanf("%d %d",&x,&n);
	cnt=(int)log2(n);
	Powers[0]=x;
	for(i=1;i<=cnt;i++)
		Powers[i]=Powers[i-1]*Powers[i-1];
	i=0;
	while(n>0){
		if(n%2==1)ans*=Powers[i];
		i++;
		n/=2;
	}
	printf("%d",ans);
}
