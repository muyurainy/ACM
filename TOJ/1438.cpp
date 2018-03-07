#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
	long long n;
	while(~scanf("%lld",&n),n){
		if(n>0){
			for(int i=31;i>0;i--){
				double p=pow(1.0*n,1.0/i);
				for(long long j=p-10;j<=p+10;j++)
					if( (long long)pow(1.0*j,i)==n){
						printf("%d\n",i);
						i=0;
						break;
					}
			}
		}
		else {
			n=-n;
			for(int i=31;i>0;i-=2){
				double p=pow(1.0*n,1.0/i);
				for(long long j=p-10;j<=p+10;j++)
					if( (long long)pow(1.0*j,i)==n){
						printf("%d\n",i);
						i=0;
						break;
					}
			}
		}
	}
}
