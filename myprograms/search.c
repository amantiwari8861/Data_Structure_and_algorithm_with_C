#include<stdio.h>
#include<conio.h>

void main()
{
	int n,a[50],m,i;
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
	}
	else
	{
		printf("element is not found at index position %d\n",i);
	
	}
  }
}