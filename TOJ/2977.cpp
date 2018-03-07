#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int y,r,n;
	bool win;
	char input;
	while(scanf("%d",&n) && n){
		y=r=0;
		win=false;
		for(int i=0;i<n;i++){
			cin>>input;
			if(input=='Y')
				y++;
			else if(input == 'R')
				r++;
			else if(r==7&&input=='B' || y<7&&input=='L'){
				win=true;
			}
		}
		if(win)
			printf("Red\n");
		else 
			printf("Yellow\n");
	} 
} 
