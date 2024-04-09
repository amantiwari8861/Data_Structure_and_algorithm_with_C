#include<stdio.h>
int Fibonacci(int);
int main()
{
   int n, i = 0, c;
   scanf("%d",&n);
   printf("Fibonacci series\n");
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\t", Fibonacci(i));	//calling of function with parameter i 
      i++; 
   }
   return 0;
}
int Fibonacci(int i)
{
   if ( i == 0 )
      return 0;
   else if ( i == 1 )
      return 1;
   else
      return ( Fibonacci(i-1) + Fibonacci(i-2) );
} 

/*   0 1 1 2 3 5 8  */

