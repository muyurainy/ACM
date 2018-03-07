#include <stdio.h>
#include <cmath>
#include <stdio.h> 
#include <iomanip>
using namespace std;
double a1,a2,b1,b2,c1,c2;
double f(double x){
	return max(a1*x*x + b1*x + c1,a2*x*x + b2*x + c2);
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&c1,&a2,&b2,&c2);
		double left = 0.0;double right =1000.0;
		while((right-left)>1e-8){
			double mid1 = left+(right - left)/3;
			double mid2 = right-(right - left)/3;
			if(f(mid1)<f(mid2)) right = mid2;
			else left = mid1;
		}
		printf("%.4f\n",f(right));
	}
}
