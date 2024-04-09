#include <stdio.h>
 
int main()
{
  int n, array[100], i, j, t;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
 
  for (i = 1 ; i <= n - 1; i++) 
  {
    j = i;
 
    while ( j > 0 && array[j-1] > array[j]) {
      t          = array[j];
      array[j]   = array[j-1];
      array[j-1] = t;
 
      j--;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }
 
  return 0;
}