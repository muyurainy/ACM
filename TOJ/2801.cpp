#include <stdio.h>
#include <iostream>
using namespace std;
string a;
void binTree(int s,int e){
	if(s==e){
		cout<<a[s];
		return ;
	}
	int length=0,j;
	for(j=e-1;j>=s;j--){
		if(a[j]>='a'&&a[j]<='z')
			length++;
		else
			length--;
		if(length==1)
			break;
	}
	binTree(s,j-1);
	cout<<a[e];
	binTree(j,e-1);
}
int main(){
	int cast;
	scanf("%d",&cast);
	while(cast--){
		cin>>a;
		binTree(0,a.length()-1);
		cout<<endl;
	}
} 
