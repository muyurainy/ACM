#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	int n,ans[1000];
	while(~scanf("%d",&n)){
		memset(ans,0,sizeof(ans));
		int sum=5;
		ans[0]=2;
		ans[1]=3;
		int i=2;
		for(;sum+ans[i-1]+1<=n;i++){
			ans[i]=ans[i-1]+1;
			sum+=ans[i];
		}
		int tmp=n-sum;
		while(tmp>0){
			for(int j=i-1;tmp>0&&j>=0;j--){
			ans[j]++;
			tmp--;
			}
		}
		printf("%d",ans[0]);
		for(int j=1;j<i;j++)
			printf(" %d",ans[j]);
		printf("\n");
	}
} 
