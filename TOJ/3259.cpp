#include <stdio.h>
#include <algorithm>
using namespace std;
const int MAX = 1000000+2;  
int fac[MAX] = {0,1}; 

int main(){
	int low,high,sum;
	fill(fac+2,fac+MAX,2);
	for (int i = 2; i < (MAX>>1); ++i)  
        for (int j = 2; i * j < MAX; ++j) {  
            ++fac[i*j];  
        }
	while(~scanf("%d%d",&low,&high)){
		sum=0;
		for(int i=low;i<=high;i++)
			if(i%fac[i]==0)
				sum++;
		printf("%d\n",sum);
	}
} 
