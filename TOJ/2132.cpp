#include <stdio.h>
int main(){
	int a[100001],n;
	while(~scanf("%d",&n),n){
		bool flag=true;
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(int i=1;i<=n;i++)
			if(a[a[i]]!=i){
				flag=false;
				break;
			}
		if(flag)
			printf("ambiguous\n");
		else
			printf("not ambiguous\n");
	}
}
