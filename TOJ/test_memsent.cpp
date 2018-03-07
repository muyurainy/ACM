#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int test[101];
	memset(test,-1,sizeof(test));
	for(int i=0;i<100;i++)
		printf("%d\n",test[i]);
}
