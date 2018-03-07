#include <stdio.h>
#define MAX (long long)1<<62
int main(){
	int ca,n;
	long long number,maxnum,minnum;
	scanf("%d",&ca);
	while(ca--){
		scanf("%d",&n);
		maxnum=-1*MAX;
		minnum=MAX;
		for(int i=0;i<n;i++){
			scanf("%lld",&number);
			if(maxnum<number)
				maxnum=number;
			if(minnum>number)
				minnum=number;
		}
		printf("%lld\n",maxnum-minnum);
	}
}
