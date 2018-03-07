#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int array[11];
	for(int i=1;i<11;i++)
		array[i]=i;
	printf("Max of array is: %d\n",*max_element(array+1,array+11));
} 
