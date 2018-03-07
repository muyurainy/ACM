#include <stdio.h>
#include <algorithm>
using namespace std; 
const int Max=1000001;
int fac[Max]={0,1};
void factorNumber(){
	fill(fac+2,fac+Max,2);
	for(int i=2;i<=(Max<<1);i++)
		for(int j=2;i*j<=Max;j++)
			++fac[i*j];
}
int main(){
	int n;
	factorNumber();
	while(scanf("%d",&n) && n)
		printf("%d\n",fac[n]);
}
