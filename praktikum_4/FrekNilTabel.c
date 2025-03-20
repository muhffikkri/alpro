#include <stdio.h>

void FrekNilTabel(int T[], int n)
{
    int count[101] = {0}; // Asumsi nilai maksimal 100
    printf("Elemen yang muncul lebih dari satu kali: ");

    for (int i = 0; i < n; i++)
    {
        count[T[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (count[T[i]] > 1)
        {
            printf("%d ", T[i]);
            count[T[i]] = 0; // Hindari pencetakan ulang
        }
    }

    printf("\n");
}

int main()
{
    int T[] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4};
    int n = sizeof(T) / sizeof(T[0]);
    FrekNilTabel(T, n);
    return 0;
}
