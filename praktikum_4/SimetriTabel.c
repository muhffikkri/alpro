#include <stdio.h>

int SimetriTabel(int T1[], int T2[], int n1, int n2)
{
    if (n1 != n2)
        return 0; // Ukuran berbeda, tidak simetri

    for (int i = 0; i < n1; i++)
    {
        if (T1[i] != T2[i])
            return 0;
    }

    return 1; // Simetri
}

int main()
{
    int T1[] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4};
    int T2[] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4};
    int n1 = sizeof(T1) / sizeof(T1[0]);
    int n2 = sizeof(T2) / sizeof(T2[0]);

    if (SimetriTabel(T1, T2, n1, n2))
        printf("T1 dan T2 Simetri\n");
    else
        printf("T1 dan T2 Tidak Simetri\n");

    return 0;
}
