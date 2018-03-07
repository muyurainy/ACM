#include <stdio.h>
int t,n,m,fa[101],px,py;
int getfather(int x){
	if(fa[x]!=x)  fa[x]=getfather(fa[x]);
	return fa[x];
}
int Union(int x,int y){
	int fx=getfather(x),fy=getfather(y);
	fa[fy]=fx;
	getfather(fx);
	if(fy!=fx)
		n--;
} 
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++)
			fa[i]=i;
		for(int i=0;i<m;i++){
			scanf("%d%d",&px,&py);
			Union(px,py);
		}
		printf("%d\n",n);
	}
}
