#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	char word[100001],t,length,count=0;
	while(~scanf("%s",word)){
		length=strlen(word);
		t=0;
		for(int i=0;i<length;i++){
			if( (word[i]>='A'&&word[i]<='Z') ||  (word[i]>='a'&&word[i]<='z') || (word[i]>='0'&&word[i]<='9')  ){
				t++;
				continue;
			}
			if(t){
			count++;
			t=0;
			}
		}
		if(t)
			count++;
		//printf("%d\n",count);
	}
	printf("%d\n",count);
} 
