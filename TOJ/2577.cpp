#include <stdio.h>
using namespace std;
int main(){
	int n,num;
	scanf("%d",&num);
	while(num--){
		int l,m;
		scanf("%d",&n);
		if(n<=10)
			printf("%d\n",n);
		else{
			for(l=0;(n/10)!=0;l++){
				int tmp=n;
				n/=10;
				if(tmp%10>=5)
					n++;
			}
			printf("%d",n);
			for(int i=0;i<l;i++)
				printf("0");
			printf("\n");
		}
	}
} 
