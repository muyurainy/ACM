#include <stdio.h>
int main()
{
	int n,sum,tmp;
	while(scanf("%d",&n)&&n){
		sum=0;
		tmp=n;
		for(int i=1;n;n/=10,i*=9){
			if(n%10<4)
				sum+=n%10*i;
			else
				sum+=(n%10-1)*i;
		}
		printf("%d: %d\n",tmp,sum);
	}
}
