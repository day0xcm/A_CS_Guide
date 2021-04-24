#include <sdtio.h>

#define MAX 1000

int a[MAX];

bool binarySearch(int low,int high){
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]>mid+1)high=mid-1;
		else if(a[mid]<mid+1)low=mid=1;
	}	else return true;
	return flase;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	if(binarySearch(0,n-1))printf("yes\n");
	else printf("no\n");
}
