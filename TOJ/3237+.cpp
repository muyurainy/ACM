#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	int base,n;
	int sum;
	char num[1001];
	scanf("%d",&n);
	while(n--){
		cin>>base>>num;
		int pow=1;
		sum=0;
		int length=strlen(num);
		cout<<length;
		for(int i=length-1;i>=0;i--){
			sum=(sum+(num[i]-'0')*pow)%10007;
			pow=(pow*base)%10007;
		}
		printf("%lld\n",sum);
	}
}
