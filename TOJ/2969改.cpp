#include<stdio.h>
int main(){
	long long a[51][51];
	int n;
	for(int i=0;i<51;i++)
		a[i][0]=a[i][i]=1;
	for(int i=1;i<51;i++)
		for(int j=1;j<i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	while(scanf("%d",&n) && n>=0){
		for(int i=0;i<n;i++)
			printf("%lld ",a[n][i]);
		printf("%lld\n",a[n][n]);
	}
}
