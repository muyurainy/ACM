#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std; 
int block[1005],c,n;
int main(){
	fill(block,block+1005,6001);
	for(int i=1;i<=1000;i++)
		for(int j=1;j<=1000;j++){
			if(i*j>1000)
				break;
			for(int k=1;k<=1000;k++){
				if(i*j*k>1000)
					break;
				block[i*j*k]=min(block[i*j*k],2*(i*j+i*k+k*j));
			}
		}
	scanf("%d",&c);
	while(c--){
		scanf("%d",&n);
		printf("%d\n",block[n]);
	}
}
