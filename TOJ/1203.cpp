#include <stdio.h>
using namespace std;
int main(){
	long long num;
	while(~scanf("%lld",&num) && num!=-1){
		for(long long i=2;i*i<=num;i++)
			while(!(num%i)){
				num/=i;
				printf("    %lld\n",i);
			}
		if(num>1)
			printf("    %lld\n",num);
		printf("\n");
	}
}
