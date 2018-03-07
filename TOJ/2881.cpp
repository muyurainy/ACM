#include <stdio.h>
#include <algorithm> 
#include <iostream>
#include <cmath> 
using namespace std;
struct Team{
	char name[21];
	int rank;
}team[100005];
bool cmp(Team a,Team b){
	return a.rank<b.rank;
}
int main(){
	int cast,n;
	scanf("%d",&cast);
	while(cast--){
		scanf("%d",&n);
		long long sum=0;
		for(int i=1;i<=n;i++)
			scanf("%s%d",team[i].name,&team[i].rank);
		sort(team+1,team+n+1,cmp);
		//cout<<team[1].name<<"  "<<team[1].rank<<endl;
		for(int i=1;i<=n;i++)
			sum+=(team[i].rank>i?team[i].rank-i:i-team[i].rank); 
		printf("%lld\n",sum);
	}
}
