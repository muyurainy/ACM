#include <iostream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
using namespace std;
int a[25];
bool flag[25];
int sum,l,n;

int dfs(int pos,int len,int count)
{
	if(count==3){
		return 1;
	}
	int i;
	for(i=pos;i>=0;i--){
		if(!flag[i]){
			flag[i]=true;
			if(len+a[i]<l){
				if(dfs(i-1,len+a[i],count)){
					return 1;
				} 
			}
			else if (len + a[i] == l){
				if(dfs(n-1,0,count+1))
					return 1;
			}
			flag[i]=false;
		}
	}
	return 0;
}

int main(){
	int tmp;
	scanf("%d",&tmp);
	while(tmp--){
		sum=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		l=sum/4;
		memset(flag,0,sizeof(flag));
		sort(a,a+n);
		if(l*4 != sum || n<4 || l<a[n - 1]){
			printf("no\n");
			continue;
		}
		if(dfs(n-1,0,0))
			printf("yes\n");
		else
			printf("no\n");
	}
}
