#include <iostream>
#include <string>
#include <stdio.h> 
#include <cstring>
using namespace std;
string s[102];
void copy(char a[],const char b[],int c,int d){
	int j=0;
	for(int k=c;k<=d;k++)
		a[j++]=b[k];
	a[j]='\0';
}
int main(){
	int cast,n,num;
	scanf("%d",&cast);
	while(cast--){
		int Max=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			cin>>s[i];
		int len=s[0].length();
		for(int i=0;i<len;i++)
			for(int j=i;j<len;j++){
				char tmp1[102],tmp2[102];
				copy(tmp1,s[0].c_str(),i,j);
				int tmp1len=strlen(tmp1);
				for(int k=0;k<tmp1len;k++)
					tmp2[k]=tmp1[tmp1len-k-1];
				tmp2[tmp1len]='\0';
				//cout<<tmp1<<endl;
				num=1;
				for(int k=1;k<n;k++)
					if(s[k].find(tmp1)!=s[k].npos||s[k].find(tmp2)!=s[k].npos)
						num++;
				if(num==n&&Max<tmp1len)
					Max=tmp1len;
			}
		printf("%d\n",Max);
	}
} 
