/*解法一： 
#include <stdio.h>
using namespace std;
int main(){
	int l;	
	while(~scanf("%d",&l)){
		int a=0,b=1,m;
		for(m=1;;m++){
			l-=b;
			if(a+b>l)
				break;
			int tmp=a;
			a=b;
			b+=tmp;
		}
		printf("%d\n",m);
	}
} */
//解法二：斐波那契数列
#include <stdio.h>
int febo[100001]={1,1};
int main(){
	for(int i=2;i<100001;i++)
		febo[i]=febo[i-1]+febo[i-2];
	int l,m;
	while(~scanf("%d",&l)){
		m=0;
		while(l>=febo[m])
			l-=febo[m++];
		printf("%d\n",m);
	}
}
