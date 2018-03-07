#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
char poststr[27];
int t;
void solve(string prestr,string instr)
{
	if(prestr.length()==0)
		return;
	if(prestr.length()==1)
	{
		poststr[t++]=prestr[0];
		return;
	}
	int tag=instr.find(prestr[0]);
	solve(prestr.substr(1,tag),instr.substr(0,tag));
	solve(prestr.substr(tag+1,prestr.length()-1-tag),instr.substr(tag+1,instr.length()-1-tag));
	poststr[t++]=prestr[0];
}

int main() 
{
	string prestr,instr;
	while(cin>>prestr>>instr)
	{
		t=0;
		solve(prestr,instr);
		poststr[prestr.length()]='\0';
		cout<<poststr<<endl;
	}
	return 0;
 } 
