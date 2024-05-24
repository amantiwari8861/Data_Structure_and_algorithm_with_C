import java.util.Scanner;

public class BS {

    public static void bubbleSort(int arr[]) {
        for (int i = 0; i < 8 - 1; i++)// n times
        {
            // System.out.println("Pass %d \n",i);
            for (int j = 0; j < 8 - i - 1; j++) // n*n times
            {
                // System.out.println("\tcomparing %d and %d \n",arr[i],arr[i+1]);
                if (arr[j] > arr[j + 1]) // n*n
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        // n+5n^2
        // n^2 + n
        // n^2
    }

    public static void main(String[] args) {

        int arr[] = { 67, 54, 567, 8, 99, 27, 434, 432 };
        bubbleSort(arr);
        int key;
        boolean isFound = false;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the key:");
        key = sc.nextInt();

        int low, high, mid;
        low = 0;
        high = 7;

        while (low <= high) {
            mid = (low + high) / 2;
            if (arr[mid] == key) {
                System.out.println("found " + key + " at index " + mid);
                isFound = true;
                break;
            }
            if (key < arr[mid]) {
                System.out.println("going left of " + mid);
                high = mid - 1;
            } else if (key > arr[mid]) {
                System.out.println("going right of " + mid);
                low = mid + 1;
            }
        }
        if (!isFound) {
            System.out.println(key + " not found in array\n");
        }

    }
}