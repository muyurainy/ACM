#include<stdio.h>
#include<algorithm>
using namespace std;
struct plant{
	int id;
	int value;
}plants[101];
bool cmp(plant a, plant b){
	return a.value<b.value;
}
int main(){
	int n,t,v,d;
    while(~scanf("%d%d",&n,&t)){
    	for(int i=0;i<n;i++){
			scanf("%d%d",&v,&d);
			plants[i].id = i + 1;
			plants[i].value = v-d;
		}
		sort(plants,plants+n,cmp);
		int time=0;
		bool isEat = false;
		for(int i=1;i<=n;i++){
			if(time+t>plants[i-1].value){
				printf("The zombies eat your brains!\n");
				isEat = true;
				break;
			}
			time+=t;
	}
	if(!isEat){
		for(int i=0;i<n-1;i++)
			printf("%d ",plants[i].id);
		printf("%d\n",plants[n-1].id);
	}
}
	}
	
