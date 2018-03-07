#include <stdio.h>
#include <algorithm>
using namespace std;
int low[10001],high[10001];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%d",&high[i]);
	for(int i=0;i<m;i++)
		scanf("%d",&low[i]);
	sort(high,high+n);
	sort(low,low+m);
	int sum=0;
	for(int i=n-1;i>=0;i--)
		for(int j=m-1;j>=0;j--){
			if(high[i]>low[j] && low[j]!=-1){
				sum++;
				low[j]=-1;
				break;
			}
		}
	printf("%d\n",sum+n);
}
