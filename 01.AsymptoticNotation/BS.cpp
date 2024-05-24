#include<iostream>
using namespace std;

void bubbleSort(int arr[])
{
    for (int i = 0; i < 8-1; i++)// n times
    {
        // cout<<"Pass %d \n",i);
        for (int j = 0; j < 8-i-1; j++) // n*n times
        {
            // cout<<"\tcomparing %d and %d \n",arr[i],arr[i+1]);
            if (arr[j]>arr[j+1]) //n*n
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // n+5n^2
    // n^2 + n
    // n^2
}

int main()
{
    // int arr[8];
    // cout<<"enter values in array:\n");
    // for (int i = 0; i < 8; i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    int arr[]={67,54,567,8,99,27,434,432};
    bubbleSort(arr);
    int key;
    bool isFound=false;
    cout<<"enter the key:";
    cin>>key;

    int low,high,mid;
    low=0;
    high=7;

    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid]==key)
        {
            cout<<"found "<<key<<" at index "<<mid<<endl;
            isFound=true;
            break;
        }
        if (key<arr[mid])
        {
            cout<<"going left of "<<mid<<endl;
            high=mid-1;
        }
        else if (key>arr[mid])
        {
            cout<<"going right of "<<mid<<endl;
            low=mid+1;
        }
    }
    // if (!isFound)
    if (isFound==0)
    {
        cout<<key<<" not found in array\n"<<endl;
    }
    return 0;
}
