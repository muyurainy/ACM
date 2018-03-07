#include <stdio.h>
int main(){
	int p,s,cast=1;
	while(~scanf("%d%d",&p,&s)&&p){
		printf("Hole #%d\n",cast++);
		if(s==1)
			printf("Hole-in-one.\n");
		else if(p==s)
			printf("Par.\n");
		else if(p>s)
			if(p-s==3)
				printf("Double Eagle.\n");
			else if(p-s==2)
				printf("Eagle.\n");
			else if(p-s==1)
				printf("Birdie.\n");
			else
				printf("Double Bogey.\n");
		else
			if(p-s<=-2)
				printf("Double Bogey.\n");
			else if(p-s==-1)
				printf("Bogey.\n");
		printf("\n");
	}
} 
