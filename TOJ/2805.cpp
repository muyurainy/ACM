#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
string s;
int n;
void dog(int a){
	if(s.length()>=(int)pow(3.0,n)){
		s+="\0";
		//cout<<s<<"haha"<<s.length()<<endl;
		return ;
	}
	if(a==0){
		return dog(1);
	}
	if(a==1){
		string t=" ";
		for(int i=1;i<s.length();i++)
			t+=" ";
		s+=t;	
		return dog(2);
	}
	if(a==2){
		int length=s.length();
		for(int i=0;i<length/2;i++)
			s+=s[i];
		//cout<<p<<"haha"<<s;
		return dog(0);
	}
}
int main(){
	while(~scanf("%d",&n)){
		s="@";
		dog(0);
		cout<<s<<endl;
	}
}
