#include <stdio.h>
#include <cmath>
using namespace std;
int reserve(int n){
	int tmp=n,i,num;
	for(i=1;(tmp/10)!=0;i++)
		tmp/=10;
	num=0;
	//printf("%d\n",i);
	while(i--){
		int p=n%10;
		n/=10;
		num+=((int)(p*pow(10,i*1.0)));
	}
	return num;
} 
int main(){
	int n,x,y;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&x,&y);
		printf("%d\n\n",reserve(x)+reserve(y));
	}
}
