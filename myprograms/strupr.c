#include<stdio.h>
void main()
{
	int i;
	char name[10];
	system("cls");
	printf("enter ur name : ");
	scanf("%s",&name);
	
	for(i=0;i<6;i++)
	{
	if(name[i]>='A'&&name[i]<='Z'||name[i]>='a'&&name[i]<='z')
	{
		printf("the %dth character is already in upper case\n",i);
		if(name[i]>='a'&&name[i]<='z')
		{
			printf("the uppercase of this is : %s \n",toupper(name[i]));
			continue;
		}
		continue;
	}
	else{
		printf("invalid input");
	}
	}
}