#include <stdio.h>

void JumFrekNilTabel(int T[], int n)
{
    int count[101] = {0};
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        count[T[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (count[T[i]] > 1)
        {
            sum += T[i];
        }
    }

    printf("Jumlah nilai elemen yang frekuensinya lebih dari satu kali: %d\n", sum);
}

int main()
{
    int T[] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4};
    int n = sizeof(T) / sizeof(T[0]);
    JumFrekNilTabel(T, n);
    return 0;
}
