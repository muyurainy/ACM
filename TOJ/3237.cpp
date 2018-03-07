#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;
int main(){
	int base,n;
	int sum;
	//string num;
	scanf("%d",&n);
	while(n--){
		string num;
		cin>>base;
		cin>>num;
		//cout<<num<<endl;
		long long pow1=1;
		sum=0;
		
		int length=num.length();
		//cout<<length;
		for(int i=length-1;i>=0;i--){
			sum=(sum+(num[i]-'0')*pow1)%10007;
			pow1=(pow1*base)%10007;
		}
		printf("%d\n",sum);
	}
}
