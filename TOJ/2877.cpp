#include <stdio.h>
int main(){
	int cs[200001],e,cast,ncs,ne,num;
	double acs,ae;
	scanf("%d",&cast);
	while(cast--){
		acs=ae=0;
		num=0;
		scanf("%d%d",&ncs,&ne);
		for(int i=0;i<ncs;i++){
			scanf("%d",&cs[i]);
			acs+=cs[i];
		}
		for(int j=0;j<ne;j++){
			scanf("%d",&e);
			ae+=e; 
		}
		acs/=ncs;ae/=ne;
		for(int i=0;i<ncs;i++)
			if(cs[i]<acs&&cs[i]>ae)
				num++;
		printf("%d\n",num);
	}
} 
