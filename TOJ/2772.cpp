#include <stdio.h>
using namespace std;
int main(){
	int ax,ay,cx,cy,bx,by,dx,dy,n;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d\n%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy);
		int flag=0;
		if((cx-ax)*(cx-ax)+(cy-ay)*(cy-ay)==(bx-dx)*(bx-dx)+(by-dy)*(by-dy)){
			if(cx==ax||dx==bx){
				if(cx==ax&&dx==bx)
					flag=1;
			}
			else{
				double k1=(1.0*(cy-ay))/(cx-ax);
				double k2=(1.0*(dy-by))/(dx-bx);
				if(k1==k2)
					flag=1;
			}
		}
		if(flag)
			printf("Yes\n");
		else
			printf("No\n");
	}
}
