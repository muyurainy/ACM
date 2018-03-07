#include <stdio.h>
int gcd(long long a,long long b){
	return (!b) ? a : gcd(b,a%b);
} 
int main()
{
	long long x,y;
	while(scanf("%lld%lld",&x,&y) && (x+y)){
		if(gcd(x,y)==1)
			printf("%lld\n",x*y-x-y);
		else printf("Inf\n");
	}
}
