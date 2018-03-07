#include<algorithm>
#include<string.h>
#include<stdio.h>
bool big;
int pow(int n,int k,int m){
	if(k==0)return 1;
	long long tmp=pow(n,k/2,m);
	tmp=tmp*tmp;
	if(tmp>=m){
		tmp%=m;
		big=true;
	}
	if(k&1){
		tmp=tmp*n;
		if(tmp>=m){
			tmp%=m;
			big=true;
		}
	}
	return (int)tmp;
}
int eular(int n){
	int tmp=1;
	for(int x=2;x<=n/x;x++){
		if(n%x==0){
			int t=1;
			while(n%x==0){
				n/=x;
				t*=x;
			}
			tmp*=t-t/x;
		}
	}
	if(n>1)tmp*=n-1;
	return tmp;
}
int f(int n,int m){
	if(n==0)return 1;
	int x=n%10;
	int y=f(n/10,eular(m));
	big=false;
	int tmp=pow(x,y,m);
	if(big)tmp+=m;
	return tmp;
}
int main(){
	int ca;
	scanf("%d",&ca);
	while(ca--){
		int n,m;
		scanf("%d%d",&n,&m);
		printf("%d\n",f(n,m)%m);
	}
}

