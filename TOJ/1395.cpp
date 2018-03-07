#include <stdio.h>
using namespace std;
int euler(int n){
	int sum=n;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			sum=sum-sum/i;
			while(n%i==0)
				n/=i;
		}
	}
	if(n>1)
		sum=sum-sum/n;
	return sum;
}
int main(){
	int n;
	while(scanf("%d",&n) && n)
		printf("%d\n",euler(n));
} 
