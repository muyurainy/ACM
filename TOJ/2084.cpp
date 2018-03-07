#include <stdio.h>
#define p 3.1415927
int main(){
	double diameter,time;
	int revolutions,i=0;
	while(scanf("%lf%d%lf",&diameter,&revolutions,&time)&&(diameter*revolutions*time)){
		diameter/=(5280*12);
		diameter=p*diameter*revolutions;
		printf("Trip #%d: %.2lf %.2lf\n",++i,diameter,diameter*3600/time);
	}
} 
