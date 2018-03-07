#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
struct diet{
	string Name;
	int day,weight; 
}Name[25]; 
bool cmp(diet a,diet b){
	return a.weight>b.weight;
}
int main()
{
	int n=0;
	string state;
	bool flag=false;
	while(cin>>state){
		if(state=="START")
			continue;
		if(state=="END"){
			if(flag)
				cout<<'\n';
			flag=true;
			for(int i=0;i<n;i++)
				Name[i].weight-=Name[i].day;
			sort(Name,Name+n,cmp); 
			for(int i=0;i<n;i++)
				cout<<Name[i].Name<<endl;
			
			n=0;
			continue;
		}
		cin>>Name[n].day>>Name[n].weight;
		Name[n].Name=state;
		n++;
	}
}
