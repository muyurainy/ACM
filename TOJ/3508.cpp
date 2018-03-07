#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int t,n;
	long long vector1[801],vector2[801];
	long long product;
	scanf("%d",&t);
	for(int cast=1;cast<=t;cast++){
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%lld",&vector1[i]);
		for(int i=0;i<n;i++)
			scanf("%lld",&vector2[i]);
		sort(vector1,vector1+n);
		sort(vector2,vector2+n);
		product=0;
		for(int i=0;i<n;i++)
			product+=(vector1[i] * vector2[n-i-1]);
		printf("Case #%d: %lld\n",cast,product);
	}
}
