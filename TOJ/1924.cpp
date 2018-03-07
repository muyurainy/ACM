#include <stdio.h>
#include <string.h>
#define Max 1<<29
int d[28],map[28][28],n,num,dis,min,sum,tmp;
char alph[28],name;
bool visit[28];
int main(){
	while(scanf("%d",&n),n){
		memset(visit,true,sizeof(visit));
		memset(d,0,sizeof(d));
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				map[i][j]=Max;
		for(int i=0;i<n-1;i++){
			getchar();
			scanf("%c%d",&alph[i],&num);
			for(int j=0;j<num;j++){
				getchar();
				scanf("%c%d",&name,&dis);
				if(dis<map[alph[i]-'A'][name-'A'])
					map[name-'A'][alph[i]-'A']=map[alph[i]-'A'][name-'A']=dis;
			}
		}
		visit[0]=false;
		sum=0;
		for(int i=0;i<n;i++)
			d[i]=map[0][i];
		for(int i=0;i<n;i++){
			min=Max;
			for(int j=0;j<n;j++)
				if(min>d[j]&&visit[j]){
					min=d[j];
					tmp=j;
				}
			sum+=d[tmp]; 
			visit[tmp]=false;
			d[tmp]=0;
			for(int j=0;j<n;j++)
				if(map[tmp][j]<d[j])
					d[j]=map[tmp][j];
		}
		printf("%d\n",sum);
	}
}
