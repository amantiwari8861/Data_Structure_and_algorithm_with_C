#include<stdio.h>

void main()
{
	int i=0,j=0,num_count=0,char_count=0;
	char str[10];
	printf("enter the number\n");
	scanf("%s",&str);

	while(str[i]!=NULL)
	{
		if(str[i]>=48&&str[i]<=57)
		{
			num_count++;
		}
			i++;
	}
	printf("there are %d digits \n",num_count);
	while(str[j]!=NULL)
	{
		if(str[j]>=65&&str[j]<=97 || str[j]>=97&&str[j]<=122 )
		{
			char_count++;
		}
			j++;
	}
	printf("there are %d characters \n",char_count);
}