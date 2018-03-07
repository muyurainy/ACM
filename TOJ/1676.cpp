#include <stdio.h>
#include <algorithm>
#include <string.h>
#define Max 51
#define inf 1<<29
int map[Max][Max],d[Max];
bool visit[Max];
int main(){
	int p,r,a,b,c,sum;
	while(~scanf("%d",&p)&&p){
		scanf("%d",&r);
		if(r==0){
			printf("0\n");
			continue;
		}
		for(int i=0;i<Max;i++)
			for(int j=0;j<Max;j++)
				map[i][j]=inf;
		memset(visit,true,sizeof(visit));
		memset(d,0,sizeof(d));
		for(int i=0;i<r;i++){
			scanf("%d%d%d",&a,&b,&c);
			if(map[a][b]>c)
				map[a][b]=map[b][a]=c;
		}
		for(int i=1;i<=p;i++)
			d[i]=map[1][i];
		visit[1]=false;
		int tmp;
		sum=0;
		for(int i=1;i<=p;i++){
			int min=inf;
			for(int j=1;j<=p;j++){
				if(visit[j]&&d[j]<min){
					min=d[j];
					tmp=j;
				}
			}
			visit[tmp]=false;
			if(min<inf)
				sum+=min; 
			for(int j=1;j<=p;j++)
				if(visit[j]&&d[j]>map[tmp][j])
					d[j]=map[tmp][j];
		}
		printf("%d\n",sum);
	}
}
