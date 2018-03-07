#include <stdio.h>
using namespace std;
int main(){
	long long n,t;
	while(scanf("%lld",&n) && n){
		t=1;
		while(t<n)
			t=t*10+1;
		while(n%t)
			t/=10;
		printf("%lld\n",n/t);
	}
}
