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

    // Find the maximum element
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Initialize count array
    int count[max + 1];
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }

    // Store the count of each element
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // Sort the array
    int index = 0;
    for (int i = 0; i <= max; i++)
    {
        while (count[i] > 0)
        {
            arr[index++] = i;
            count[i]--;
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
