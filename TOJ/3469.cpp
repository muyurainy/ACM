#include <stdio.h>
#define swap(a,b) {a=a+b;b=a-b;a=a-b;}
int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b);
} 
int main()
{
	int n,m,b1,b2,cast;
	scanf("%d",&cast);
	while(cast--){
		scanf("%d%d%d%d",&n,&m,&b1,&b2);
		n-=b1;m-=b2;
		if(n<m)
			swap(n,m);
		printf("%d\n",gcd(n,m));
	}
}
