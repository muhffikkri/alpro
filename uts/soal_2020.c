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

    // Soal 2
    // Deskripsi: Program ini menghitung selisih maksimum dan minimum dari elemen-elemen tabel

    // Kamus
    int i;        // Indeks untuk iterasi
    int min, max; // Nilai minimum dan maksimum
    int n;        // Ukuran tabel
    printf("Masukkan banyaknya elemen: ");
    scanf("%d", &n);
    int T[n]; // Tabel untuk menyimpan elemen

    // Algoritma

    isiTabel(T, n);

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            min = T[i];
            max = T[i];
        }
        else
        {

            if (T[i] < min)
            {
                min = T[i];
            }
            else
            {
                max = T[i];
            }
        }
    }

    printf("Selisih maksimum dan minimum adalah %d\n", max - min);
    return 0;
}

int Soal3()
{
    printf("Soal 3\n");
    // Soal 3
    // Deskripsi: Program ini menghitung besarnya penjumlahan sub array

    // Kamus
    int i, j; // Indeks untuk iterasi
    int n;    // Ukuran tabel
    int sum;  // Penjumlahan sub array
    printf("Masukkan banyaknya elemen: ");
    scanf("%d", &n);
    int T[n]; // Tabel untuk menyimpan elemen

    // Algoritma
    isiTabel(T, n);
    sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            sum += T[j];
        }
    }

    printf("Besarnya penjumlahan sub array adalah %d\n", sum);
    return 0;
}

int Soal4()
{
    printf("Soal 4\n");
    // Soal 4
    // Deskripsi: Program ini memeriksa apakah tabel 1 dan tabel 2 adalah simetris

    // Kamus
    int i; // Indeks untuk iterasi
    int n; // Ukuran tabel
    printf("Masukkan banyaknya elemen: ");
    scanf("%d", &n);
    int T1[n]; // Tabel untuk menyimpan elemen
    int T2[n]; // Tabel untuk menyimpan elemen

    // Algoritma
    isiTabel(T1, n);
    isiTabel(T2, n);

    for (i = 0; i < n; i++)
    {
        if (T1[i] != T2[i])
        {
            printf("Tabel tidak simetris\n");
            return 0;
        }
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