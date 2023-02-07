#include<stdio.h>
#include<stdlib.h>

int main()
{
    // int arr[50];//array is static that's why we have to use DMA

    // int *ptr;
    // printf("size of ptr is %d \n",sizeof(ptr));//8 bytes
    // ptr=(int*)malloc(4);//provides memory at runtime
    // *ptr=56;
    // printf(" value at address ptr is %d \n",*ptr);
    // printf(" address in ptr is %d \n",ptr);

   c
    // free(ptarr);
    // printf("after deallocating ptarr \n");
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("at address %d value is %d \n",&ptarr[i],*(ptarr+i));
    // }

    //Calloc initializes the values in block to zero 

    ptarr=(int*)calloc(4,sizeof(int));// 4*4 => 16 bytes

    for (int i = 0; i < 4; i++)
    {
        printf(" %d \n",ptarr[i]);
    }
    
    //malloc is much better than calloc bcz it is too faster than calloc
    return 0;
}