#include <stdio.h>
#define Max 30001
int a[Max],cast,n,count;
int main(){
	scanf("%d",&cast);
	while(cast--){
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		count=1;
		for(int i=0;i<n-1;i++){
			if(a[i]>a[i+1]){
				++count;
				int s=0;
				for(int j=i+1;j<n-1;j++)
					if((s==0&&a[j]<a[j+1])||(s==1&&a[j]>a[j+1])){
						++count;
						s^=1;
					}
				break;
			}
		}
		printf("%d\n",count);
	}
} 
