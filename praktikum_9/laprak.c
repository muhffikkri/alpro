#include <stdio.h>

int sekuensial()
{
    int TABNILAI[101];
    float rata_rata;
    int i, j, count, total;
    char TABGRADE[101];
    int grade[5];

    for (i = 0; i < 101; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &TABNILAI[i]);
    }

    printf("\n");

    total = 0;
    for (i = 0; i < 101; i++)
    {
        total += TABNILAI[i];
    }
    rata_rata = (float)total / 101;
    printf("Rata-rata nilai adalah: %.2f\n", rata_rata);

    for (j = 0; j < 5; j++)
    {
        grade[j] = 0;
    }

    for (i = 0; i < 101; i++)
    {
        if (TABNILAI[i] >= 80)
        {
            TABGRADE[i] = 'A';
            grade[0] += 1;
        }
        else if (TABNILAI[i] >= 70)
        {
            TABGRADE[i] = 'B';
            grade[1] += 1;
        }
        else if (TABNILAI[i] >= 55)
        {
            TABGRADE[i] = 'C';
            grade[2] += 1;
        }
        else if (TABNILAI[i] >= 40)
        {
            TABGRADE[i] = 'D';
            grade[3] += 1;
        }
        else
        {
            TABGRADE[i] = 'E';
            grade[4] += 1;
        }
    }

    printf("%.2f", rata_rata);
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf(grade[i]);
    }

    return 0;
}

int searching1()
{
    // searching with sentinel if table are sorted ascending

    int i;
    int N = 101;
    int x;
    int IX;
    int t[N];

    t[N + 1] = x;
    i = 0;
    while (t[i] != x)
    {
        i++;
    }
    if (i < N + 1)
    {
        IX = i;
    }
    else
    {
        IX = 0;
    }

    return 0;
}

int searching2()
{
    int i, j;
    int temp;
    int NMK;
    int MKX;
    int TABMK[101];
    int exist;
    int low;
    int high;
    int mid;

    for (i = 0; i < 101; i++)
    {
        TABMK[i] = 0;
    }

    NMK = 0;
    for (i = 0; i < 101; i++)
    {
        if (TABMK[i] != 0)
            NMK++;
    }

    scanf("%d", &MKX);

    // check if MKX is in T using binary search
    low = 0;
    high = NMK;
    mid;
    exist = 0;
    // binary search
    while (low <= high && exist == 0)
    {
        mid = (low + high) / 2;
        if (TABMK[mid] == MKX && TABMK[mid] != 0)
        {
            printf("MKX %d ada di T[%d]\n", MKX, mid);
            exist = 1;
        }
        else if (TABMK[mid] < MKX)
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
        TABMK[NMK] = MKX;
        NMK++;

        // sort T in ascending order
        for (i = 0; i < NMK - 1; i++)
        {
            for (j = i + 1; j < NMK; j++)
            {
                if (TABMK[i] > TABMK[j])
                {
                    temp = TABMK[i];
                    TABMK[i] = TABMK[j];
                    TABMK[j] = temp;
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
