#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string> 

using namespace std;
struct Node{
	char str[201];
	int num;
}Word[31];
int main(){
	int n,t;
	char key[31][31];
	char str[201];
	int flag=1;
	while(~scanf("%d %d",&n,&t)){
		
		int Maxn=-1;
		for(int i=0;i<n;i++)
			scanf("%s",key[i]);
		getchar();
		//printf("%s\n",key[4]);
		for(int i=1;i<=t;i++){
			Word[i].num=0;
			gets(str);
			//printf("%s\n",str);
			int len=strlen(str);
			char tmp[201];
			strcpy(tmp,str);
			strcpy(Word[i].str,str);
			//printf("%s\n",tmp);
			for(int j=0;j<len;j++)
				if(tmp[j]>='A'&&tmp[j]<='Z')
					tmp[j]=tmp[j]-'A'+'a';
			string s(tmp);
			for(int j=0;j<n;j++){
				int sat=0;
				while(1){
					sat=s.find(key[j],sat);
					if(sat==-1)
						break;
					if(sat>=1)
						if((tmp[sat-1]<'a'||tmp[sat-1]>'z')&&(tmp[sat+strlen(key[j])]<'a'||tmp[sat+strlen(key[j])]>'z'))
							Word[i].num++;
					sat++;
				}
				if(Maxn<Word[i].num)
					Maxn=Word[i].num;
			}
		}
		printf("Excuse Set #%d\n",flag++);
		for(int i=1;i<=t;i++)
			if(Word[i].num==Maxn)
				printf("%s\n",Word[i].str);
		printf("\n");
	}
} 
