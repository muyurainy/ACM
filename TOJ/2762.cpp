#include <stdio.h>
#include <algorithm>
using namespace std;
#define MAXN 200005
#define INF 10000000
struct Node{
	int l,r;
	int nMin,nMax;
}Tree[MAXN*3];
int a[MAXN];
int nMax,nMin; 
void Build(int i,int l,int r){
	Tree[i].l=l;
	Tree[i].r=r;
	if(l==r)
	{
		Tree[i].nMax=Tree[i].nMin=a[l];
		return ;
	}
	int mid=(l+r)/2;
	Build(i<<1,l,mid);
	Build(i<<1|1,mid+1,r);
	Tree[i].nMax=max(Tree[i<<1].nMax,Tree[i<<1|1].nMax);
	Tree[i].nMin=min(Tree[i<<1].nMin,Tree[i<<1|1].nMin);
} 
void Query(int i,int l,int r){
	if(Tree[i].nMax<=nMax&&Tree[i].nMin>=nMin) return ;
	if(Tree[i].l==l&&Tree[i].r==r){
		nMax=max(Tree[i].nMax,nMax);
		nMin=min(Tree[i].nMin,nMin);
		return ;
	}
	int mid=(Tree[i].l+Tree[i].r)>>1;
	if(r<=mid) Query(i<<1,l,r);
	else if(l>=mid) Query(i<<1|1,l,r);
	else{
		Query(i<<1,l,mid);
		Query(i<<1|1,mid+1,r);
	}
}

int main(){
	int n,q,l,r;
	while(~scanf("%d%d",&n,&q)){
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		Build(1,1,n);
		for(int i=0;i<q;i++){
			scanf("%d%d",&l,&r);
			nMax=-INF;
			nMin=INF; 
			Query(1,l,r);
			printf("%d\n",nMax-nMin);
		}
	}
}

