#include <stdio.h>
#include <cmath>
int main(){
	double n;
	while(scanf("%lf",&n)&&n>=0)
		printf("%.2lf\n",(sqrt(n*2)));
} 
