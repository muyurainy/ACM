#include <stdio.h>
#include <algorithm>
using namespace std;
struct game{
	int s,e;
};
bool com(game a,game b){
	return a.e<b.e;
}
int main(){
	game games[10001];
	int n,dur;
	while(~scanf("%d",&n),n){
		for(int i=0;i<n;i++){
			scanf("%d%d",&games[i].s,&dur);
			games[i].e=games[i].s+dur;
		}
		sort(games,games+n,com);
		int m=0,sum=1;
		for(int i=1;i<n;i++)
			if(games[i].s>=games[m].e){
				sum++;
				m=i;
			}
	printf("%d\n",sum);
	}
} 
