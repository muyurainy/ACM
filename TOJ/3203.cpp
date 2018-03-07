#include <stdio.h>
int debt[100001];
int main(){
	int n;
	while(~scanf("%d",&n)){
		for(int i=0;i<n;i++)
			scanf("%d",&debt[i]);
		int sum=0,step=0,position=0;
		for(int i=0;i<n;i++){
			sum+=debt[i];
			if(sum<0&&sum>debt[i])
				position=i;
			else if(sum>=0&&sum<debt[i])
				step+=2*(i-position);
		}	
		printf("%d\n",step+n);
	}
}
