/*Nama File 	: NilMax2Tabel.c*/
/*Deskripsi 	: Menampilkan bilangan terbesar kedua dalam sebuah tabel*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 21.30*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int T[] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4}; // Tabel
    int n = sizeof(T) / sizeof(T[0]);         // Ukuran tabel

    // Di notal nilai array gaperlu diisi dan diasumsikan kapasitas array nya 10, jadi n = 10

    int max1 = 0, max2 = 0; // Nilai maksimum pertama dan kedua
    int i;                  // Counter

    /*Algoritma*/
    for (i = 0; i < n; i++)
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

    return 0;
}
