#include <stdio.h>
#include <cstring>
#include <queue>
#include <iostream>
using namespace std;
int n=1,h,lake[30],ti[30],fish[30],di[30];
struct Node{
	int lable,fishNum;
	Node (int a=0,int b=0):
		lable(a),fishNum(b){} 
};
struct loadcmp{
	bool operator()(Node a,Node b){
		if(a.fishNum == b.fishNum) return a.lable > b.lable;
	return a.fishNum < b.fishNum;
	}
};
int fishing(int last)
{
	int times = h*12; int result = 0;
	memset(lake,0,sizeof(lake));
	for(int i=0;i<last;i++) times-=ti[i];
	priority_queue<Node,vector<Node>,loadcmp> que;
	for(int i=0;i<=last;i++){
		if(fish[i]>0){
			que.push(Node(i,fish[i]));
		}
	}
	Node node;
	while(times>0)
	{
		if(que.empty()) break;
		times--;
		node = que.top();
		que.pop();
		result+=node.fishNum;
		node.fishNum-=di[node.lable];
		if(node.fishNum>0) que.push(node);
		lake[node.lable]++;
	}
	return result;
}
int main()
{
	int flag=0;
	while(scanf("%d",&n)&& n)
	{
		if(flag)
			printf("\n");
		flag++;
		scanf("%d",&h);
		for(int i=0;i<n;i++)
			scanf("%d",&fish[i]);
		for(int i=0;i<n;i++)
			scanf("%d",&di[i]);
		for(int i=0;i<n-1;i++)
			scanf("%d",&ti[i]);
		int fishMax = 0,lake_count=0,current_fish;
		for(int i=0;i<n;i++){
			current_fish = fishing(i);
			if(current_fish > fishMax)
				{fishMax=current_fish;lake_count=i;}
		}
		int sum=0;
		fishing(lake_count);
		for(int i=0;i<n;i++)
			sum+=lake[i]*5;
		for(int i=0;i<lake_count;i++)
			sum+=ti[i]*5;
		sum= h*60-sum;
		cout<<lake[0]*5+sum;
		for(int i=1;i<n;i++)
			cout<<", "<<lake[i]*5;
		//printf("\nNumber of fish expected: %d\n",fishMax);
		cout<<'\n'<<"Number of fish expected: "<<fishMax<<endl;
	}
	return 0;
} 
