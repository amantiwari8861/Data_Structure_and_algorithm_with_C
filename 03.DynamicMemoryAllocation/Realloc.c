#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *ptarr;

    ptarr=(int*)malloc(4*sizeof(int));// 4*4 => 16 bytes

    for (int i = 0; i < 4; i++)
    {
        *(ptarr+i)=10+i;
        // printf("at address %d value is %d \n",&ptarr[i],ptarr[i]);
    }   

    ptarr=(int*)realloc(ptarr,7*sizeof(int));
    // *(ptarr+4)=89;
    // *(ptarr+5)=98;
    // *(ptarr+6)=45;

    ptarr[4]=66;
    ptarr[5]=77;
    ptarr[6]=88;

    for (int i = 0; i < 7; i++)
    {
        printf(" %d \n",ptarr[i]);
    }
    
    return 0;
}