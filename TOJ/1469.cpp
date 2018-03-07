#include <stdio.h>
#include <algorithm>
#include <cstring>
using namespace std;
typedef struct Node
{
	int x,y;
}sticks;
int cmp (Node a,Node b)
{
	if (a.x==b.x) return a.y<b.y;
	return a.x<b.x;
}
Node node[5005];
int flag[5005];
int main()
{
	int count,num;
	scanf("%d",&count);
	for(int counttag=0;counttag<count;counttag++)
	{
		scanf("%d",&num);
		for(int i=0;i<num;i++)
			scanf("%d%d",&node[i].x,&node[i].y);
		sort(node,node+num,cmp);
		memset(flag,0,sizeof(flag));
		int ans=0;
		for(int i=0;i<num;i++)
		{
			if(flag[i]==0){
				int tag=node[i].y;
				for(int j=i;j<num;j++){
					if(flag[j]==0 && node[j].y>=tag){
						tag = node[j].y;
						flag[j]++;	
					}
				}
				ans++;
			}
		}
		printf("%d\n",ans);
	}
}
