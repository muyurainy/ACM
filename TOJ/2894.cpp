#include <stdio.h>
#include <algorithm>
using namespace std;
#define Max 100001
#define INF 1<<29
int s[Max],e[Max];
int main(){
	int cast,n;
	scanf("%d",&cast);
	while(cast--){
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d%d",&s[i],&e[i]);
		sort(s,s+n);
		sort(e,e+n);
		int sum=0;
		for(int i=0,j=0;i<n;i++)
			if(s[i]<e[j])
				sum++;
			else
				j++;
		printf("%d\n",sum);		
	}
} 
