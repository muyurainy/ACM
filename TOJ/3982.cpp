#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int n,m,t,city[51],sum;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		sum=0;
		for(int i=0;i<m;i++)
			scanf("%d",&city[i]);
		sort(city,city+m);
		for(int i=0;i<m;i++)
			if(n>=city[i]){
				sum++;
				n-=city[i];
			}
			else 
				break;
		printf("%d\n",sum);
	}
} 
