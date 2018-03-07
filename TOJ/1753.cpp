#include <stdio.h>
long long Min(long long a,long long b,long long c){
	if(a<b)
		return a<c?a:c;
	else
		return b<c?b:c;
}
int main()
{ 
	int num2,num3,num5,n;
	while(~scanf("%d%d%d%d",&num2,&num3,&num5,&n)){
		const int Max=n;
		long long Prime[Max+1];
		int index2=0,index3=0,index5=0;
		Prime[0]=1;
		for(int i=0;i<n;i++){
			long long minnum=Min(Prime[index2]*num2,Prime[index3]*num3,Prime[index5]*num5);
			if(minnum==Prime[index2]*num2)
				index2++;
			if(minnum==Prime[index3]*num3)
				index3++;
			if(minnum==Prime[index5]*num5)
				index5++;	
			Prime[i+1]=minnum;
		}
		printf("%lld\n",Prime[n]);
	}
} 
