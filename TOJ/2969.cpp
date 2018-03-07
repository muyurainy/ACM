#include <stdio.h>
int main(){
	long long a[51];
	int n;
	double tmp;
	while(scanf("%d",&n) &&n>=0){
		a[0]=a[n]=1;
		for(int i=1;i<=n/2;i++){
			tmp=1.0;
			for(int j=0;j<i;j++)
				tmp*=(double)(n-j)/double(i-j);
			a[i]=a[n-i]=tmp+0.5;
		}
		for(int i=0;i<n;i++)
			printf("%lld ",a[i]);
		printf("%lld\n",a[n]);
	}
} 
