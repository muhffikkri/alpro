#include <stdio.h>

int sekuensial()
{
    int TABNILAI[101];
    float rata_rata;
    int i, j, count, total = 0;
    char TABGRADE[101];
    int grade[5];

    for (i = 0; i < 101; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &TABNILAI[i]);
    }

    printf("\n");

    for (i = 0; i < 101; i++)
    {
        total += TABNILAI[i];
    }
    rata_rata = (float)total / 101;
    printf("Rata-rata nilai adalah: %.2f\n", rata_rata);

    for (j = 0; j < 5; j++)
    {
        TABGRADE[j] = 0;
    }

    for (i = 0; i < 101; i++)
    {
        if (TABNILAI[i] >= 80)
            TABGRADE[i] = 'A';

        else if (TABNILAI[i] >= 70)
            TABGRADE[i] = 'B';

        else if (TABNILAI[i] >= 55)
            TABGRADE[i] = 'C';

        else if (TABNILAI[i] >= 40)
            TABGRADE[i] = 'D';

        else
            TABGRADE[i] = 'E';
    }

    for (j = 0; j < 5; j++)
    {
        count = 0;
        for (i = 0; i < 101; i++)
        {
            if (TABGRADE[i] == grade[j])
                count++;
        }
        printf("Jumlah mahasiswa dengan grade %c: %d\n", grade[j], count);
    }

    return 0;
}

int searching1()
{
    // searching with sentinel if table are sorted ascending

    int i;
    int n = 101;
    int x;
    scanf("%d", &n);
    int TABMK[n];
    int NMK;
}

int searching2()
{
    int i;
    int NMK;
    int MKX;
    int T[101];
    int exist;
    int low;
    int high;
    int mid;

    for (i = 0; i < 101; i++)
    {
        T[i] = 0;
    }

    for (i = 0; i < 101; i++)
    {
        if (T[i] != 0)
            NMK++;
    }

    scanf("%d", &MKX);

    // check if MKX is in T using binary search
    low = 0;
    high = NMK - 1;
    mid;
    exist = 0;
    // binary search
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (T[mid] == MKX && exist == 0 && T[mid] != 0)
        {
            printf("MKX %d ada di T[%d]\n", MKX, mid);
            exist = 1;
        }
        else if (T[mid] < MKX)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // if MKX is not found, add MKX to T
    // Table must be sorted ascending
    if (exist == 0)
    {
        T[NMK] = MKX;
        NMK++;

        // sort T in ascending order
        for (i = 0; i < NMK - 1; i++)
        {
            for (int j = i + 1; j < NMK; j++)
            {
                if (T[i] > T[j])
                {
                    int temp = T[i];
                    T[i] = T[j];
                    T[j] = temp;
                }
            }
        }
        printf("MKX %d ditambahkan ke T[%d]\n", MKX, NMK - 1);
    }
    else
    {
        printf("MKX %d sudah ada di T[%d]\n", MKX, mid);
    }

    return 0;
}

int main()
{
    sekuensial();
    searching1();
    searching2();
    return 0;
}