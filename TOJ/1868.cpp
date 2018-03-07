#include <stdio.h>
#include <string.h>
#define Max 1000000+5
using namespace std;
int prime[Max];
bool isprime[Max];
int main(){
	int n,sum,count=0;
	memset(isprime,true,sizeof(isprime));
	isprime[0]=isprime[1]=false;
	for(int i=2;i<=Max/2;i++)
		if(isprime[i]){
			for(int j=i<<1;j<=Max;j+=i)
				isprime[j]=false;
			prime[count++]=i;
		}
	while(scanf("%d",&n)&&n>0){
		printf("%d : ",n);
		sum=0;
		for(int i=0;i<count&&prime[i]<=n;++i){
			if(n%prime[i]==0)
				sum++;
			while(n%prime[i]==0)
				n/=prime[i];	
			}
		printf("%d\n",sum);
	}
} 
