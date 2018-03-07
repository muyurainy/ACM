#include <stdio.h>
#include <cmath>
int main(){
	int a,b,s,m,n;
	int sx,sy;
	double ans,v;
	while(~scanf("%d%d%d%d%d",&a,&b,&s,&m,&n)&&(a||b||s||m||n)){
		sx=a*m;
		sy=b*n;
		ans=atan(1.0*sy/sx);
		v=(1.0*sy/s)/sin(ans);
		printf("%.2lf %.2lf\n",ans*180/(acos(-1)),v);
	}
}
