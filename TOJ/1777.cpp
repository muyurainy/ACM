#include <stdio.h>
#include <cmath>
using namespace std;
int main(){
	int n,i;
	while(~scanf("%d",&n),n){
		double tmp=pow(2.0,((n-1960)/10+2));
		double sum=0;
		for(i=1;tmp>sum;i++)
			sum+=log(1.0*i)/log(2.0);
		printf("%d\n",i-2);
	}
}
