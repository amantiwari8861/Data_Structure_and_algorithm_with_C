#include<stdio.h>
#include<stdlib.h>//standard library contains malloc like fxns
int main()
{
    //array is static so to dynamically allocate the memory we use malloc
    int *pointer;
    pointer=(int*)malloc(5*sizeof(int)); //20 bytes allocated to pointer and casted to integer type pointer
    // malloc is used to dynamically allocate the memory (initalize with garbage value )
    // pointer=(int*)calloc(5,sizeof(int)); // initialize with 0 (but slower than malloc)
    printf("inputted the value \n");
    *(pointer+0)=10;// asterick(*) is used to represent value at address
    *(pointer+1)=20;
    *(pointer+2)=30;
    *(pointer+3)=40;
    *(pointer+4)=50;
    // pointer=realloc(pointer,7*sizeof(int)); //to dynamically reallocate the memory
    // *(pointer+5)=70;
    // *(pointer+6)=90;
    // for(int i=0;i<7;i++)
    for(int i=0;i<5;i++)
    {
        printf("the value is %d at addresss %d \n",*(pointer+i),(pointer+i));
        // %d for decimal ,%p for pointer,%x for hexadecimal
    }
    free(pointer);//to dynamically deallocate the memory
    // for(int i=0;i<5;i++) //it is proving that free removes the space that was allocated 
    // {
    //     printf("the value is %d at addresss %d \n",*(pointer+i),(pointer+i));
    //     // %d for decimal ,%p for pointer,%x for hexadecimal
    // }
    return 0;
}
    
    // Sleep(2000);//to sleep the program  (in miliseconds )
    // sleep(5);//to sleep the program  (in seconds )
    // system("color 86");//to change color
    // system("cls"); //for clearing previous output