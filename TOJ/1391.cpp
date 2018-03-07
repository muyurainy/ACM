#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	string word[1001];
	int salary[1001];
	int m,n;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
		cin>>word[i]>>salary[i];
	while(n--){
		int sum=0;
		string ch;
		while(cin>>ch&&ch!="."){
			for(int i=0;i<m;i++)
				if(ch==word[i]){
					sum+=salary[i];
					break;
				}
		}
		printf("%d\n",sum);
	}
} 
