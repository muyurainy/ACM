#include <stdio.h>
using namespace std;
long a[100002],lis[100002];
int bf(int size,int m){
	int start=1,end=size,mid;
	while(start<=end){
		mid=(start+end)/2;
		if(m>lis[mid])
			start=mid+1;
		else
			end=mid-1;
	}
	return start;
}
int main(){
	int n,sum;
	while(~scanf("%d",&n)){
		sum=0;
		for(int i=1;i<=n;i++)
			scanf("%ld",&a[i]);
		for(int i=1;i<=n;i++){
			if(sum==0 || a[i]>lis[sum])
				lis[++sum]=a[i];
			else{
				int k=bf(sum,a[i]);
				lis[k]=a[i];
			}
		}
		printf("%d\n",sum);
	}
} 
