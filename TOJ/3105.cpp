#include <stdio.h>
#include <string.h>
bool isPrime[100001];
int prime[10000];
void Prime(int n){
	memset(isPrime,true,sizeof(isPrime));
	int num=0;
	isPrime[0]=isPrime[1]=false;
	for(int i=2;i<=n;i++){
		if(isPrime[i]){
			prime[++num]=i;
			for(int j=2*i;j<=n;j+=i)
				isPrime[j]=false;
			}
	}
}
int main(){
	int n,num;
	scanf("%d",&n);
	Prime(100000);
	while(n--){
		scanf("%d",&num);
		printf("%d\n",prime[num]);
	}
}
