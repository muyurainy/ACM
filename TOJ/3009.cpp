#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main(){
	int n,max,tmp;
	char vine[152];
	scanf("%d",&n);
	getchar();
	for(int cast=1;cast<=n;cast++){
		gets(vine);
		tmp=max=0;
		for(int i=0;i<strlen(vine);i++){
			if(vine[i]=='[') tmp++;
			else if(vine[i]==']') tmp--;
			if(tmp>max)
				max=tmp;
		}
		printf("%d %d\n",cast,int(pow(2.0,max)));
	}
}
