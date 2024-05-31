#include <stdio.h>
#define MAX 6
#define GREEN "\x1B[32m"
#define RESET "\033[0m"
#define BLUE "\x1B[34m"
#define YELLOW "\x1B[33m"
void printArray(int arr[])
{
    printf("\t[");
    for (int i = 0; i < MAX; i++)
    {
        printf(GREEN"%d"RESET, arr[i]);
        if (i < MAX - 1)
            printf(",");
    }
    printf("]\n");
}
void applyBubbleSort(int arr[])
{
    int temp=MAX-1;
    for (int i = 0; i < MAX - 1; i++)
    {
        printf("Pass %d \n", i);
        for (int j = 0; j < MAX - i - 1; j++)
        {
            // printf("comparing %d with %d \n",arr[j],arr[j+1]);
            if (arr[j] > arr[j + 1])
            {
                // printf("%d is greater than %d that's why swapping them :",arr[j],arr[j+1]);
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
            printArray(arr);
        }
    }
}
int main()
{
    int arr[MAX] = {10, 3, 98, 4, 12, 9};
    printf(BLUE"The initial array is :"RESET);
    printArray(arr);
    applyBubbleSort(arr);
    printf(YELLOW"\nThe sorted array is :"RESET);
    printArray(arr);
    return 0;
}
