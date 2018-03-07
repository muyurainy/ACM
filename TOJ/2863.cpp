#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int roc[50003],l,n,m,right,left,ans=0,mid;
	scanf("%d%d%d\n",&l,&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&roc[i]);
	left=roc[0]=0;
	right=roc[n+1]=l;
	sort(roc,roc+n+2);
	while(left<=right){
		int flag=0,sum=0;
		mid=(left+right)/2;
		for(int i=1;i<=n;i++)
			if(roc[i]-roc[flag]<mid)
				sum++;
			else 
				flag=i;
		if(sum>m)
			right=mid-1;
		else
			left=mid+1;
	}
	printf("%d\n",right);
}
