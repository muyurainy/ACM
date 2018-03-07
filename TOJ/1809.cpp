#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	double wire[21];
	int n;
	while(~scanf("%d",&n),n){
		bool flag=false;
		for(int i=0;i<n;i++)
			scanf("%lf",&wire[i]);
		sort(wire,wire+n);
		double sum=wire[0];
		for(int i=1;i<n;i++){
			if(wire[i]<=sum){
				flag=true;
				break;
			}
			sum+=wire[i];
		}
		if(flag)	printf("YES\n");
		else printf("NO\n");
	}
}
