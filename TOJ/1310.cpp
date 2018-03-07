#include <stdio.h>
#include <string.h>
using namespace std;
int pc[71],cc[71];
char pt[71],ct[71];
int main(){
	int k;
	while(scanf("%d",&k),k){
		scanf("%s",ct);
		int len=strlen(ct);
		for(int i=0;i<len;i++){
			if(ct[i]=='_')
				cc[i]=0;
			else if(ct[i]=='.')
				cc[i]=27;
			else
				cc[i]=ct[i]-'a'+1;
		}
		for(int i=0;i<len;i++){
			pc[(k*i)%len]=(cc[i]+i)%28;
		}
		for(int i=0;i<len;i++){
			if(pc[i]==0)
				pt[i]='_';
			else if(pc[i]==27)
				pt[i]='.';
			else
				pt[i]=pc[i]+'a'-1;
		}
		pt[len]='\0';
		printf("%s\n",pt);
	}
} 
