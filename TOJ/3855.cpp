#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	string dish[101],order;
	int m,n;
	double price[101],sum;
	while(~scanf("%d%d",&n,&m)){
		sum=0;
		for(int i=0;i<n;i++)
		{	cin>>dish[i];scanf("%lf",&price[i]);}
		for(int i=0;i<m;i++){
			cin>>order;
			for(int j=0;j<n;j++)
				if(dish[j]==order)
				 	sum+=price[j];
		}
		printf("%.2lf\n",sum);
	}
}
