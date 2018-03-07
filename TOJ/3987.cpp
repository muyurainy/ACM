#include <stdio.h>
#include <cmath>
int main()
{
	long long t,n,l,i,tag=0;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		if(tag==1)
			printf("\n");
		tag=1;
		if(n<0)
		{n=-n;l=-1;}
		else
			l=1;
		long long tmp=(long long)pow(n,1.0/3.0);
		//printf("%lld",tmp);
		for(i=tmp-1;i<=tmp+1;i++)
			if(i*i*i==n){
				printf("%lld\n",i*l);
				break;
			}
		if(i==tmp+2)
			printf("Wrong Message!\n");
	}
 } 
