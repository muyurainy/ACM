#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
const int N=1e6+1;
bool is_prime[N];
int prime[N];
using namespace std;
int  sieve (int n)
{
    int p=0;
    for(int i=0;i<=n;i++)
    {
        is_prime[i]=true;
    }
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<=n;i++)
    {
        if(is_prime[i])
        {
            prime[p++]=i;
            for(int j=2*i;j<=n;j+=i)
            {
                is_prime[j]=false;
            }
        }
    }
    return p;
}

int main()
{
	long long b;
	int maxnum=1e6;
	int num = sieve(maxnum);
	while(~scanf("%lld",&b)&&b!=0){
		if(b==1){
			printf("0\n");
			continue;
		}
		long long euler=b;
		for(int i=0;i<num && prime[i]<=b;i++){
			if(b%prime[i]==0){
				euler=euler*(prime[i]-1)/prime[i];
				while(b%prime[i]==0)
					b=b/prime[i];
			}
		}
		if(b>1)
			euler=euler/b*(b-1);  //为什么改为 euler*b/(b-1)报错 
		printf("%lld\n",euler);
	}
}
