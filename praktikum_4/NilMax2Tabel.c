#include <stdio.h>

void NilMax2Tabel(int T[], int n)
{
    int max1 = 0, max2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (T[i] > max1)
        {
            max2 = max1;
            max1 = T[i];
        }
        else if (T[i] > max2 && T[i] < max1)
        {
            max2 = T[i];
        }
    }

    printf("Nilai maksimum ke-2 adalah: %d\n", max2);
}

int main()
{
    int T[] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4};
    int n = sizeof(T) / sizeof(T[0]);
    NilMax2Tabel(T, n);
    return 0;
}
