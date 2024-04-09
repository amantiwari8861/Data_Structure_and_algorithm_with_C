#include<stdio.h>
void main()
{
	int i,n,j,t;
	printf("enter no. of elements\n");
	scanf("%d",&n);
	int array[n];
	printf("enter the %d element\n",n);
	for(i=0;i<n;i++)
	{	
		scanf("%d",&array[i]);
	}
	 for(i=0;i<n-1;i++)
	 {
		j=i;
		while(j>0&&array[j-1]>array[j])
		{
			t=array[j];
			array[j]=array[j-1];
			array[j-1]=t;
			j--;
		}
	 }
	 printf("sorted aray is\n");
	 for(i=0;i<=n-1;i++)
	{
		printf("%d\t",array[i]);
	}
}