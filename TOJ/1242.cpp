#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main(){
	int t,n,p[21]={0},w[21],tmp[41];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		string s;
		for(int i=1;i<=n;i++)
			scanf("%d",&p[i]);
		for(int i=1;i<=n;i++){
			for(int k=0;k<(p[i]-p[i-1]);k++)
				s+="(";
			s+=")";
		}
		memset(tmp,0,sizeof(tmp));
		int count=0;
		for(int i=0;i<2*n;i++){
			if(s[i]==')'){
				int sum=0;
				for(int j=i-1;j>=0;j--)
					if(s[j]=='('){
						sum++;
						if(tmp[j]==0){
							w[count++]=sum;
							tmp[j]=1;
							break;
						}
					}
			}
		}
		for(int i=0;i<n-1;i++)
			printf("%d ",w[i]);
		printf("%d\n",w[n-1]);
	}
}
