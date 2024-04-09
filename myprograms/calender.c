#include<stdio.h>
int main()
{
	int mon,yr,choice,days;
	printf("please enter the month and year \n");
	scanf("%d %d",&mon,&yr);
	
	if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
	{
		days=31;
	}
	else if(mon==2||mon==4||mon==6||mon==9||mon==11)
	{
		days=30;
	}
	else
	{
		days=28;
	}
	printf("\n\tsun\tmon\ttue\twed\tthu\tfri\tsat");
	
	
	
	return 0;
}