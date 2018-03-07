#include <stdio.h>
using namespace std;
int main()
{
	int cast,sum;
	double n,l,w,s[10002],p[10002];
	scanf("%d",&cast);
	for(int k=0;k<cast;k++){
		sum=0;
		scanf("%lf%lf%lf",&n,&l,&w);
		for(int i=0;i<n;i++)
			scanf("%lf%lf",&p[i],&s[i]);
		for(int i=0;i<n;i++){
			if(s[i]<=0){
				sum++;
				continue;	
			}
			else if(p[i]==0){
				sum++;
				continue;
			}
			else if(p[i]*s[i] <= (l-p[i])*(w-s[i])){
				sum++;
				continue;
			}
		}
		printf("%d\n",sum);
	}
}
