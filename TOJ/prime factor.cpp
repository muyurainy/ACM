#include <stdio.h>
using namespace std;
int primefactor[100000];
int enumprimefactor(int n){
	int temp=n,num=0;
	for(int i=2;i*i<=n;i++){
		if(temp%i==0)
			primefactor[num++]=i;
		while(temp%i==0)
			temp/=i;
	}
	if(temp>1)
		primefactor[num++]=temp;
	return num;
}

int main()
{
	int n;
	scanf("%d",&n);
	int num = enumprimefactor(n);
	for(int i=0;i<num;i++)
		printf("%d ",primefactor[i]);
	return 0;
}
