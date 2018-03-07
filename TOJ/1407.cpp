#include <stdio.h>
long long gird(long long n,long long m){
	long long a=m+n;
	double sum=1.0;
	long long b=(n<m?n:m);
	while(b>0)
		sum*=(double)(a--)/(double)(b--);
	sum+=0.5;
	return (long long)sum;
}
int main(){
	long long n,m;
	while(~scanf("%lld%lld",&n,&m)&&(n+m))
		printf("%lld\n",gird(n,m));
} 
