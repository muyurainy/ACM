#include<stdio.h>
#include<algorithm>
long long modexp(long long a, long long b, long long mod)  
{  
    long long res=1;  
    while(b>0)  
    {  
        a=a%mod;
        if(b&1)//&位运算：判断二进制最后一位是0还是1，&的运算规则为前后都是1的时候才是1；  
            res=res*a%mod;  
        b=b>>1;  
        a=a*a%mod;  
    }  
    return res;  
}  

int main(){
	int n;
	long long a,b,c,k;
	scanf("%d",&n);
	while(n--){
		scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
		if(c+a==2*b){
			long long q=b-a;
			a=(a%200907+((k-1)%200907)*(q%200907))%200907;
			printf("%lld\n",a);
		}
		else{
			long long q=b/a;
			printf("%lld\n",(a*modexp(q,k-1,200907))%200907);
		}
		
	}
} 
