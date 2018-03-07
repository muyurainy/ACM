#include <stdio.h>
#include <algorithm>
#define swap(a,b){a=a+b;b=a-b;a=a-b;}
int main(){
	int a,b,c,d;
	while(~scanf("%d%d%d%d",&a,&b,&c,&d),a*b*c*d){
		if(a<b) swap(a,b);
		if(c<d) swap(c,d);
		if(a<=c&&b<=d)
			printf("100%%\n");
		else
			printf("%d%%\n",(int)(100*std::min((1.0*d/b),(1.0*c/a))));
	}
}
