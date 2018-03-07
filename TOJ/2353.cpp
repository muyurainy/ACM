#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
	int N,n,a[301];
	bool isa[1000001];
	scanf("%d",&N);
	while(N--){
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		int ans=1; 
		while(1){
			for(int i=0;i<ans;i++)
				isa[i]=false;
			bool flag=false;
			for(int i=0;i<n;i++){
				if(isa[a[i]%ans]==false)
					isa[a[i]%ans]=true;
				else{
					flag=true;
					break;
				}
			}
			if(flag){
				++ans;
				continue;
			}
			else{
				printf("%d\n",ans);
				break;
			}
		}	
	}
} 
