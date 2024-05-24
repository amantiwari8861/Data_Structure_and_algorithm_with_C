```
C
int arr[]={67,54,567,8,99,27,434,432};
void bubbleSort(int arr[])
{
    for (int i = 0; i < 8-1; i++)
    {
        for (int j = 0; j < 8-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
```

Step 1: i=0
        i<8-1  => 0<7 True
        
        (a) j=0
            0<8-i-1  => 0<8-0-1  => 0<7 True

            arr[0]>arr[1]
            67>54 True
            temp=67
            arr[0]=54
            arr[1]=67

        new array : [54,67,567,8,99,27,434,432]

        (b) j=1
            1<7 True

            arr[1]>arr[2]
            67>567 F

        (c) j=2

