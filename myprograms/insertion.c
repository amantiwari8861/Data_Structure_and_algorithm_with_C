#include <stdio.h>
 
int main()
{
  int n, array[100], i, temp,j;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
 
  for (i = 1 ; i <= n - 1; i++) 
  {
    temp=array[i];
	j=i-1;
 
  while ( j >=0 && array[j]>=temp) 
	{
		array[j+1]=array[j];
		j--;
    }
	array[j+1]=temp;
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (i = 0; i <= n - 1; i++) 
  {
    printf("%d\n", array[i]);
  }
  return 0;
}