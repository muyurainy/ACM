#include <stdio.h>
#include <string.h>
using namespace std;
#define Maxn 1 << 16
bool isPrime[Maxn];
int Prime(int n){
	memset(isPrime,true,sizeof(isPrime));
	isPrime[0]=isPrime[1]=false;
	int sum=0;
	for(int i=2;i<n;i++){
		if(isPrime[i]){
			sum++;
			for(int j=2*i;j<n;j+=i)
				isPrime[j]=false;
		}
	}
	return sum;
}

int main(){
	int n,primeNum;
	primeNum=Prime(Maxn);
	while(scanf("%d",&n),n){
		int sum=0;
		for(int i=2;i<=n/2;i++)
			if(isPrime[i]&&isPrime[n-i])
				sum++;
		printf("%d\n",sum);
	}
}
