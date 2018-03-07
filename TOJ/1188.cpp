#include <stdio.h>
#include <algorithm> 
using namespace std;
int main()
{
	int count;
	int tian[1001],king[1000];
	while(scanf("%d",&count)&&count)
	{
		for(int i=0;i<count;i++)
			scanf("%d",&tian[i]);
		for(int i=0;i<count;i++)
			scanf("%d",&king[i]);
		sort(tian,tian+count);
		sort(king,king+count);
		int lk=0,lt=0,hk=count-1,ht=count-1;
		int ans=0;
		while(ht>=lt)
		{
			if(tian[lt]>king[lk])
			{
				ans+=200;
				lt++;
				lk++; 
			}
			else if(tian[lt]<king[lk])
			{
				ans-=200;
				lt++;
				hk--;
			}
			else if(tian[lt] == king[lk] && tian[ht]>king[hk])
			{
				ans+=200;
				ht--;
				hk--;
			}
			else if(tian[lt] == king[lk] && tian[ht]<=king[hk])
			{
				if(tian[lt]<king[hk]) ans-=200;
				lt++;
				hk--;
			}
		}
		printf("%d\n",ans);
			
	}
	return 0;
}
