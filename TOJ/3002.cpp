#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[102];
int main()
{
	int n;
	while(~scanf("%d",&n) && n){
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		sort(arr,arr + n);
		int sum=0;
		for(int i=0 ; i< n/2+1 ;i++)
			sum+=(arr[i]/2 +1);
		printf("%d\n",sum);
	}
}
