#include<stdio.h>

int main()
{
	int i;
	char *msg[3];
	*msg[0]="hello";
	*msg[1]="are";
	*msg[2]="wel";
	for(i=0;i<3;i++)
	{
		printf("%s\n",msg[i]);
	}
return 0;
}