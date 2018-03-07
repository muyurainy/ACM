#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int n;
	string a;
	char room[21];
	while(~scanf("%d",&n),n){
		int leaveNumber=0;
		int rooms=n;
		string b="#";
		memset(room,'#',sizeof(room));
		cin>>a;
		for(int i=0;i<a.length();i++){
			int tmp=1;
			for(int j=0;j<b.length();j++)
				if(b[j]==a[i])
					{tmp=0;break;}
			if(!tmp)
				continue; 
			if(!rooms){
				for(int j=0;j<n;j++)
					if(a[i]==room[j]){
						rooms++;
						room[j]='#';
						tmp=0;
						break;
				}
				if(tmp){
					b+=a[i];
					leaveNumber++;
					continue;
				}
			}
			for(int j=0;j<n;j++)
				if(a[i]==room[j]){
					rooms++;
					room[j]='#';
					tmp=0;
					break;
				}
			if(tmp){
				rooms--;
				for(int j=0;j<n;j++)
					if(room[j]=='#'){
						room[j]=a[i];
						//cout<<room<<endl;
						break;
					}
			}
				
		}
		if(!leaveNumber)
			printf("All customers tanned successfully.\n");
		else
			printf("%d customer(s) walked away.\n",leaveNumber);
	}
}
