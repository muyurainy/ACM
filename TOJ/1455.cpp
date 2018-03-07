#include <stdio.h>
#include <cstring>
using namespace std;
int arr[500002],lef[500002],righ[500002];
long long sum;
const int Max = 2000000000;
void merge_sort(int begin ,int end){
	if(begin == end) return ;
	int mid = (begin + end)/2;
	merge_sort(begin,mid);
	merge_sort(mid+1,end);
	memcpy(lef+1,arr+begin,sizeof(int) * (mid-begin+1));
	memcpy(righ+1,arr+mid+1,sizeof(int) * (end-mid));
	int left=1,right=1;
	int left_num=mid-begin+1;
	lef[left_num+1]=righ[end-mid+1] = Max;
	for(int i=begin;i<=end;i++){
		if(lef[left]>righ[right]){
			arr[i]=righ[right++];
			sum+= left_num;
		}
		else{
			arr[i]=lef[left++];
			left_num--;
		}
	}
}

int main()
{
	int n;
	while(scanf("%d",&n) && n){
		for(int i=1;i<=n;i++)
			scanf("%d",&arr[i]);
		sum=0;
		merge_sort(1,n);
		printf("%lld\n",sum);
	}
}
