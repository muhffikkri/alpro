#include <stdio.h>

int sequentialSearchWithSentinel(int arr[], int size, int target)
{
    arr[size] = target; // Add the sentinel value at the end
    int i = 0;

    while (arr[i] != target)
    {
        i++;
    }

    if (i < size)
    {
        return i; // Return the index if the target is found
    }
    else
    {
        return -1; // Return -1 if the target is not found
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50}; // Ensure the array is sorted
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int extendedArr[size + 1]; // Create an extended array for the sentinel
    for (int i = 0; i < size; i++)
    {
        extendedArr[i] = arr[i];
    }

    int result = sequentialSearchWithSentinel(extendedArr, size, target);

    if (result != -1)
    {
        printf("Number %d found at index %d.\n", target, result);
    }
    else
    {
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}