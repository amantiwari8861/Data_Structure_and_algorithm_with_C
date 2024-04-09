#include<stdio.h>
void main()
{
	int a[20],i,n,c,j,temp;
	printf("enter no. of elements\n");
	scanf("%d",&n);
	printf("enter the %d element\n",n);
	for(c=0;c<n;c++)
	{	
		scanf("%d",&a[c]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the output is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
}