#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#inlcude <string.h>

#define MAX 10000000

int RandInt(int i, int j){
	int temp;
	temp=i+(1.0*rand()/RAND_MAX)*(j-i);
	return temp;
}

int A[MAX];

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;n++){
		while(1){
			int t=RandInt(1,n);
			int flag=1;
			for(int j=0;j<i;j++){
				if(A[j]==t){
					flag=0;
					break;
				}
			}
			if(flag){
				A[i]=t;
				break;
			}else
				continue;
		}
	}
	for(int i=0;i<n;i++)
		printf("%d",A[i]);
	printf("\n");
}
