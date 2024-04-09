#include<stdio.h>

void main()
{
	int n,a[50],m,i,temp=0;
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("which element u wanna to find\n");
	scanf("%d",&m);
	for(i=0;i<n;i++)
  {
	if(a[i]==m)
	{
		printf("element is found at index position %d\n",i);
		temp++;
	}
	
  }
		if(0==temp  )
		{
			printf("element is not found \n");
		}
		else
		{
			printf("%d is present %d times in array\n",m,temp);
		}
}