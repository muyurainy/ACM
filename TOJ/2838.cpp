#include <stdio.h>
#include <string.h>
#include <algorithm>
int dp[35001];
int a[22];
int main(){
	int num,n;
	while(~scanf("%d%d",&num,&n)){
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++)
			for(int j=num;j>=a[i];j--)
				dp[j]=std::max(dp[j],dp[j-a[i]]+a[i]);
		printf("%d\n",dp[num]);
	}
}
