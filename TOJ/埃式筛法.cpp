#include <stdio.h>
#include <string.h>
using namespace std;
const int max=1000001;
int prime[max];
bool isprime[max];
int Prime(int n){
	memset(isprime,true,sizeof(isprime));
	int p=0;
	isprime[0]=isprime[1]=false;
	for(int i=2;i<=(n >> 1);i++){
		for(int j=2;j*i<=n;j++)
			isprime[i*j]=false;
	}
	for(int i=2;i<=n;i++)
		if(isprime[i])
			prime[p++]=i;
	return p;
} 

int main(){
	int n;
	while(scanf("%d",&n) && n){
		int number=Prime(n);
		printf("Prime Number is %d\n",number);
		for(int i=0;i<number;i++)
			printf("%d\n",prime[i]);
	}
}
