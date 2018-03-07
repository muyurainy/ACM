#include <stdio.h>
#include <cmath>
#define PI acos(-1.0) 
#define swap(a,b) {a=a+b;b=a-b;a=a-b;}
using namespace std;
struct point{
	double x,y;
};
double distance(point a,point b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
double Circular(point a,double ra,point b,double rb){
	double l=distance(a,b);
	if(ra<rb) //注意这里必须要找出最大值，因为下面减去ra*l*sin(angle1)时必须确保ra是大圆 
		swap(ra,rb);
	if(l>=(ra+rb))
		return 0;
	if(l<=(ra-rb))
		return rb*rb*PI;
	double angle1=acos((l*l+ra*ra-rb*rb)/(2*l*ra));
	double angle2=acos((l*l+rb*rb-ra*ra)/(2*l*rb));
	return ra*ra*angle1+rb*rb*angle2-ra*l*sin(angle1);
}
int main(){
	point a,b;
	double ra,rb;
	while(~scanf("%lf%lf%lf%lf%lf%lf",&a.x,&a.y,&ra,&b.x,&b.y,&rb)) 
		printf("%.3lf\n",Circular(a,ra,b,rb));
}
