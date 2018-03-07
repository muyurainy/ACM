#include <stdio.h>
#include <algorithm>
#define inf 1000000000
int main(){
	int cast;
	double v,t,min;
	while(scanf("%d",&cast) && cast){
		min=inf;
		for(int i=0;i<cast;i++){
			scanf("%lf%lf",&v,&t);
			if(t<0) continue;
			double tmp=t+16200.0/v;
			if(tmp<min)
				min=tmp;
		}
		if((int)min<min) min++;
		printf("%d\n",(int)min);
	}
}
