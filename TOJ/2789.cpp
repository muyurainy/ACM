#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;
int a[100002];
int n,m;
bool find(int slove){
	int num=1;
	int sum=0;
	for(int i=0;i<n;i++)
		if(sum+a[i]<=slove) sum+=a[i];
		else{
			num++;
			sum=a[i];
		}
		return (num<=m);
}
int main(){
	while(~scanf("%d%d",&n,&m)){
		int low=0,high=0,mid;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			high+=a[i]; 
			low=max(low,a[i]);
		}
		while(low!=high){
			mid = (low+high)>>1;
			if(find(mid)) high = mid;
			else low=mid+1;
		}
		printf("%d\n",low);
	}
}
