#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main(){
	int room[401],n,t,start,end;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&t);
		memset(room,0,sizeof(room));
		while(t--){
			scanf("%d%d",&start,&end);
			if(start>end){
				int tag=start;
				start=end;
				end=tag;
			}
			if(start%2==0)
				start--;
			if(end%2==1)
				end++;
			for(int i=start;i<=end;i++)
				room[i]++;
		}
		printf("%d\n",*max_element(room,room+401) *10);
	}
	
} 
