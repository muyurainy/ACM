#include <stdio.h>
int a[12]={1,2,1,2,1,1,2,2,2,2,2,2};
int main(){
	int t,n,sum;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		sum=0;
		while(n>12){
			n-=6;
			sum++;
		}
		sum+=a[n-1];
		printf("Case %d: %d\n",i+1,sum); 
	}
}
