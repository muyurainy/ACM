#include <stdio.h>
int main(){
	double ave,ans1,ans2,mon[1001];
	int n;
	while(~scanf("%d",&n)&&n){
		ave=0.0;
		double sum=0;
		ans1=ans2=0.0;
		for(int i=0;i<n;i++){
			scanf("%lf",&mon[i]);
			sum+=mon[i];
		}
		sum/=n;
		ave=(int)(sum*100.0+0.5)/100.0;
		for(int i=0;i<n;i++)
			if(mon[i]>ave)
				ans1+=(mon[i]-ave);
			else 
				ans2+=(ave-mon[i]);
		printf("$%.2lf\n",ans1<ans2?ans1:ans2);
	}
} 
