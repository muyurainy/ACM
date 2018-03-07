#include <stdio.h>
using namespace std;
bool isPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
			return false;
	}
	return true;
}
int main(){
	int t,n,p;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int tag=n;
		p=1;
		if(n==1)
			p=1;
		else if(isPrime(n))
			p=n;
		else{
			for(int i=2;i<=n;i++)
				if(n%i==0 && isPrime[i]){
					p*=i;
					while(n%i==0)
						n/=i;
				}
		}
		printf("%d\n",tag/p+1);
	}
} 
