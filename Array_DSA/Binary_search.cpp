#include <stdio.h>

// Binary search function
int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid; // Element found, return its index
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // Target is in the right half
        }
        else
        {
            right = mid - 1; // Target is in the left half
        }
    }

    return -1; // Element not found in the array
}

int main()
{
    int arr[] = {2, 4, 7, 10, 15, 20, 25, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the element you want to search for: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        printf("Element %d found at index %d.\n", target, result);
    }
    else
    {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
