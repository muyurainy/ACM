#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n,length,l[100001];
	while(~scanf("%d%d",&n,&length)){
		int k=0;
		int sum=0;
		for(int i=0;i<n;i++)
			scanf("%d",&l[i]);
		sort(l,l+n);
		for(int i=n-1;k<=i;i--){
			if(l[i]+l[k]<=length)
				k++;
			sum++;
		}
	printf("%d\n",sum);
	}
} 
