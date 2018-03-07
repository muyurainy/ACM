#include<cstdio>
using namespace std;
int main()
{
	long long  n;
	while(scanf("%lld",&n) && n)
	{
		long long  temp=n;
		long long  ans=n;
		for(long long i=2;i*i<=temp;i++)
		{
			if(temp%i==0)
			{
				ans=ans-ans/i;	
				while(temp%i==0)
				{
					temp=temp/i;	
				}
			}
			
		}
		if(temp>1)
			ans=ans-ans/temp;
		printf("%lld\n",ans);
	}
	return 0;
}
