#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	int n;
	char x[81],y[81];
	int a[81],b[81],c[82];
	scanf("%d",&n);
	int cast=n;
	while(n--){
		scanf("%s%s",x,y);
		int lx=strlen(x);
		int ly=strlen(y);
		int len=(lx>ly?lx:ly);
		int carry=0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		for(int i=0;i<lx;i++)
			a[lx-1-i]=x[i]-'0';
		for(int i=0;i<ly;i++)
			b[ly-1-i]=y[i]-'0';
		for(int i=0;i<len;i++){
			int tmp=a[i]+b[i]+carry;
			carry=tmp/2;
			c[i]=tmp%2;
		}
		if(carry==1)
			c[len++]=1;
		printf("%d ",cast-n);
		bool rap=true;
		for(int i=len-1;i>=0;i--){
			if(c[i]==0&&rap==true)
				if(i==0){
					printf("0");
					break;
				}
				else
				continue;
			rap=false;
			printf("%d",c[i]);
		}
		printf("\n");
	}
} 
