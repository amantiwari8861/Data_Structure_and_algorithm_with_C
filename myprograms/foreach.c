#include<stdio.h>

void main()
{
	int arr[5]={65,45,3,4,23};
	int i;
	printf("this is the foreach loop ");
	
	foreach(i : arr)
	{
		printf("the value of i is %d\n",i);
		printf("the value of array is %d\n",i);
	}
}