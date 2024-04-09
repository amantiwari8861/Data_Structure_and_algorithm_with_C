#include<stdio.h>
#include<math.h>
void main()
{	

	int i,s,deci=0,sum=0,j,show[20],show2=0;
	printf("enter the size of the binary\n");
	scanf("%d",&s);
	int arr[s];
	printf("Enter the binary no.\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]!=0 && arr[i]!=1)
		{
			printf("please enter a valid input\n");
			break;
		}
	}
	for(i=0;i<s;i++)
	{
		if(arr[i]==1||arr[i]==0)
		{
			sum=pow(2,s-i-1);
			deci=1*sum;
			show[i]=deci;
			if(arr[i]==0)
			{
			sum=pow(2,s-1-i);
			deci=0*sum;
			show[i]=deci;
			}
			show2=show[i]+show2;
		}
		else
		{
			printf("hii");
		}
	}
	printf("  decimal value = %d",show2);

}


/*while(num>0)
	{
		rem=num%10;
		deci=deci+rem+base;
		num=num/10;
		base=base*2;
	}*/