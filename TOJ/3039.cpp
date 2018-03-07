#include <stdio.h>
#include <algorithm>
#include <iostream> 
using namespace std;
int main(){
	int a[6];
	while(scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5])&&(a[0]+a[1]+a[2]+a[3]+a[4]+a[5])){
		sort(a,a+6);
		double sum=(a[1]+a[2]+a[3]+a[4])/4.0;
		cout<<sum<<endl;
	}
} 
