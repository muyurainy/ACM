#include <stdio.h>
int main(){
	double speed;
	int tag1,tag2,tag3,w,s;
	while(~scanf("%lf%d%d",&speed,&w,&s)&&(speed+w+s)){
		tag1=tag2=tag3=0;
		if(speed<=4.5&&w>=150&&s>=200) tag1=1;
		if(speed<=6.0&&w>=300&&s>=500) tag2=1;
		if(speed<=5.0&&w>=200&&s>=300) tag3=1;
		if(tag1)
			if(tag2)
				if(tag3)
					printf("Wide Receiver Lineman Quarterback \n");
				else
					printf("Wide Receiver Lineman \n");
			else
				if(tag3)
					printf("Wide Receiver Quarterback \n");
				else
					printf("Wide Receiver \n");
		else
			if(tag2)
				if(tag3)
					printf("Lineman Quarterback \n");
				else
					printf("Lineman \n");
			else
				if(tag3)
					printf("Quarterback \n");
				else
					printf("No positions\n");
	}
}
