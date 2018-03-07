#include <stdio.h>
bool ok(int n,int l){
	while(n){
		if(n%10==l)
			return false;
		n/=10;
	} 
	return true;
}
int main(){
	int n,l;
	while(~scanf("%d%d",&n,&l)){
		int num=1,sum=0;
		while(sum<n){
			if(ok(num,l)){
				num++;
				sum++;
			}
			else
				num++;
		}
		printf("%d\n",num-1);
	}
}
