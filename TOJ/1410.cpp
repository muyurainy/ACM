#include <stdio.h>
#include <stdlib.h>
#define swap(a,b) {a=a+b;b=a-b;a=a-b;}
int main(){
	long long a,b,first;
	while(~scanf("%lld%lld",&a,&b),a&&b){
		if(a<b)
			swap(a,b);
		first=1;
		while(b){
			if(a>=2*b || a%b==0)
				break;
			a-=b;
			swap(a,b);
			first++;
		}
		if(first%2)
			printf("Stan wins\n");
		else
			printf("Ollie wins\n");
	}
}
