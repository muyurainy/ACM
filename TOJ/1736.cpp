#include <stdio.h>
#include <queue>
#include <string.h>
using namespace std;
int to[8][2] = {-1,-2,-2,-1,-2,1,-1,2,1,-2,2,-1,2,1,1,2};
int vis[400][400],n,sx,sy,ex,ey;
struct node{
	int x,y,step;
};
int check(int x,int y){
	if(x<0||x>=n||y<0||y>=n)
		return 1;
	return vis[x][y];
}
void bfs(){
	memset(vis,0,sizeof(vis));
	node a,next;
	queue<node> Q;
	a.x=sx;
	a.y=sy;
	a.step=0;
	vis[sx][sy]=1;
	Q.push(a);
	while(!Q.empty()){
		a=Q.front();
		Q.pop();
		if(a.x==ex&&a.y==ey){
			printf("%d\n",a.step);
			return ;
		}
		for(int i=0;i<8;i++){
			next=a;
			next.x=a.x+to[i][0];
			next.y=a.y+to[i][1];
			if(check(next.x,next.y))
				continue;
			next.step = a.step+1;
			vis[next.x][next.y]=1;
			Q.push(next);
		}
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d%d",&n,&sx,&sy,&ex,&ey);
		bfs();
	}
}

