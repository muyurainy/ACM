#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
	int fib[23],tmp[23],t,x,sum;
	fib[1]=1;fib[2]=2;
	for(int i=3;i<23;i++)
		fib[i]=fib[i-1] + fib[i-2];
	//printf("%d\n",fib[22]);
	scanf("%d",&t);
	while(t--){
		scanf("%d",&x);
		memset(tmp,0,sizeof(tmp));
		for(int i=22;i>=1;i--)
			if(x>=fib[i]){
				x-=fib[i];tmp[i]=1;
			}
		sum=0;
		for(int i=2;i<23;i++)
			if(tmp[i])
				sum+=fib[i-1];
 		printf("%d\n",sum);
	}
 } 
