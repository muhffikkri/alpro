#include <stdio.h>

void countSort(int arr[], int n)
{
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    int range = max - min + 1;
    int count[range];
    int output[n];

    for (int i = 0; i < range; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[arr[i] - min]++;
    for (int i = 1; i < range; i++)
        count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];

    printf("After Count Sort: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;

        printf("After iteration %d: ", i + 1);
        for (int k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }
}

int main()
{
    // NIM 2 digit akhir = 69
    int T[7] = {7, 1, 6, 5, 3, 9, 6};
    int n = 7;

    // Array to store sorted results
    int sortedByCountSort[7];
    int sortedBySelectionSort[7];

    // Copy original array for Count Sort
    for (int i = 0; i < n; i++)
    {
        sortedByCountSort[i] = T[i];
    }
    printf("Original Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", T[i]);
    printf("\n");

    // Perform Count Sort
    countSort(sortedByCountSort, n);

    // Copy original array for Selection Sort
    for (int i = 0; i < n; i++)
    {
        sortedBySelectionSort[i] = T[i];
    }

    // Perform Selection Sort
    printf("Performing Selection Sort:\n");
    selectionSort(sortedBySelectionSort, n);

    // Display final sorted arrays
    printf("Final Sorted Array by Count Sort: ");
    for (int i = 0; i < n; i++)
        printf("%d ", sortedByCountSort[i]);
    printf("\n");

    printf("Final Sorted Array by Selection Sort: ");
    for (int i = 0; i < n; i++)
        printf("%d ", sortedBySelectionSort[i]);
    printf("\n");

    return 0;
}
