#include <stdio.h>
using namespace std;
int main()
{
	float h,l,v,g=9.8;
	while(~scanf("%f%f%f",&h,&l,&v) && (h+v+l)){
		printf("%.2f\n",h-0.5*g*l*l/(v*v)+0.5*v*v/g);
	}
}
