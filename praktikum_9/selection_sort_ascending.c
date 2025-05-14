#include <stdio.h>

int main()
{
    int n;
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int arr[n];
    printf("Masukkan elemen: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++)
    {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIdx])
            {
                maxIdx = j;
            }
        }
        // Swap the found maximum element with the first element
        int temp = arr[maxIdx];
        arr[maxIdx] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}