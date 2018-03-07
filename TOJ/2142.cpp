#include <stdio.h>
int main(){
	bool dinner[501][101];
	int n,d,flag;
	while(scanf("%d%d",&n,&d),n+d){
		for(int i=0;i<d;i++)
			for(int j=0;j<n;j++)
				scanf("%d",&dinner[i][j]);
		for(int i=0;i<n;i++){
			flag=0;
			for(int j=0;j<d;j++){
				if(dinner[j][i])
					flag++;
			}
			if(flag==d)
					break;
	}
	if(flag==d)
		printf("yes\n");
	else
		printf("no\n");
	}
}
