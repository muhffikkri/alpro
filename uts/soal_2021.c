#include <stdio.h>

void isiTabel(int T[], int n)
{
    // Kamus
    int i;    // Indeks untuk iterasi
    int elmt; // Elemen yang akan dimasukkan

    // Algoritma
    printf("Masukkan elemen-elemen tabel: ");
    i = 0;
    while (i < n)
    {
        scanf("%d", &elmt);
        if (elmt < 0)
        {
            printf("Nilai tidak boleh negatif\n");
        }
        else
        {
            T[i] = elmt;
            i++;
        }
    }
}

int Soal2()
{
    printf("Soal 2\n");
    // Kamus
    int i; // Indeks untuk iterasi
    int P; // Nilai P
    int S; // Nilai S

    // Algoritma
    printf("Masukkan nilai P: ");
    scanf("%d", &P);
    printf("Masukkan nilai S (harus lebih besar sama dengan P): ");
    scanf("%d", &S);

    if (S <= 0 || P <= 0)
    {
        printf("S dan P harus positif\n");
    }
    else
    {
        if (P > S)
        {
            printf("P harus kurang dari sama dengan S\n");
        }
        else
        {
            i = 0;
            while (S > 0 && P > 0)
            {
                if (P % 2 == 0)
                {
                    S = S - 1;
                }
                else
                {
                    S = S - 2;
                }
                P = P - 2;
                i = i + 1;
            }
            printf("Jumlah iterasi: %d\n", i);
        }
    }
    return 0;
}

void SplitArr(int T[], int T1[], int T2[], int n)
{
    // Kamus
    int i, j; // Indeks untuk iterasi

    // Algoritma
    isiTabel(T, n);

    j = 0;
    for (i = 0; i < n; i++)
    {
        if (n % 2 == 0)
        {

            if (i < n / 2)
            {
                T1[i] = T[i];
            }
            else
            {
                T2[j] = T[i];
                j++;
            }
        }
        else
        {
            if (i < (n + 1) / 2)
            {
                T1[i] = T[i];
            }
            else
            {
                T2[j] = T[i];
                j++;
            }
        }
    }
}

int Soal3()
{
    printf("Soal 3\n");
    // Kamus
    int i, j;      // Indeks untuk iterasi
    int n, n1, n2; // Ukuran tabel

    // Algoritma
    printf("Masukkan banyaknya elemen: ");
    scanf("%d", &n);
    int T[n]; // Tabel untuk menyimpan elemen

    if (n % 2 == 0)
    {
        n1 = n / 2;
        n2 = n / 2;
    }
    else
    {
        n1 = (n + 1) / 2;
        n2 = (n - 1) / 2;
    }
    int T1[n1]; // Tabel untuk menyimpan elemen
    int T2[n2]; // Tabel untuk menyimpan elemen
    SplitArr(T, T1, T2, n);

    printf("Tabel 1: ");

    if (n % 2 == 0)
    {
        for (i = 0; i < n / 2; i++)
        {
            printf("%d ", T1[i]);
        }
        printf("\nTabel 2: ");
        for (i = 0; i < n / 2; i++)
        {
            printf("%d ", T2[i]);
        }
    }
    else
    {
        for (i = 0; i < (n + 1) / 2; i++)
        {
            printf("%d ", T1[i]);
        }
        printf("\nTabel 2: ");
        for (i = 0; i < (n - 1) / 2; i++)
        {
            printf("%d ", T2[i]);
        }
    }
    return 0;
}

int Soal4()
{
    printf("Soal 4\n");

    // Kamus
    int i, j; // Indeks untuk iterasi
    int n;    // Ukuran tabel
    printf("Masukkan banyaknya elemen: ");
    scanf("%d", &n);
    int T[n]; // Tabel untuk menyimpan elemen

    // Algoritma
    isiTabel(T, n);

    j = n - 1;
    for (i = 0; i < n; i++)
    {
        if (T[i] != T[j])
        {
            printf("Tabel tidak simetris\n");
            return 0;
        }
        j--;
    }
    printf("Tabel simetris\n");
    return 0;
}
int main()
{
    Soal2();
    Soal3();
    Soal4();

    return 0;
}