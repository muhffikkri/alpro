/*Nama File 	: SimetriTabel.c*/
/*Deskripsi 	: Memeriksa simetris antar 2 tabel*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 21.30*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int T1[] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4}; // Tabel
    int T2[] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4}; // Tabel
    int n1 = sizeof(T1) / sizeof(T1[0]);       // Ukuran tabel
    int n2 = sizeof(T2) / sizeof(T2[0]);       // Ukuran tabel

    // Di notal nilai array gaperlu diisi dan diasumsikan kapasitas array nya 10, jadi n = 10

    int i; // Counter

    /*Algoritma*/
    if (n1 != n2) // Ukuran berbeda, tidak simetri
    {
        printf("T1 dan T2 Tidak Simetri\n");
    }
    else
    {
        if (n1 == n2) // Ukuran sama
        {
            for (i = 0; i < n1; i++)
            {
                if (T1[i] != T2[i])
                {
                    printf("T1 dan T2 Tidak Simetri\n");
                    i = n1;
                }
            }
        }
        else
        {
            printf("T1 dan T2 Simetri\n");
        }
    }

    return 0;
}
