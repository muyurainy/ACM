#include <stdio.h>
int main(){
	int m;
	while(~scanf("%d",&m)){
		int n=(m-1)/2;
		printf("%d %d %d\n",m,2*n*n+2*n,2*n*n+2*n+1);
	}
} 
