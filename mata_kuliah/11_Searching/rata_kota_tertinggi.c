/*Nama File 	: rata_kota_tertinggi.c*/
/*Deskripsi 	: Menghitung kota dengan rata rata penjualan tertinggi*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 17 Mei 2025*/

#include <stdio.h>

int main()
{
    // Kamus
    int penjualan[3][4] = {{10, 15, 10, 5},
                           {20, 25, 20, 15},
                           {10, 5, 14, 3}};
    int rata_rata[3];
    int max_rata_rata;
    int max_kota;
    int total;
    int i, j;

    // Algoritma
    for (i = 0; i < 3; i++)
    {
        total = 0;
        for (j = 0; j < 4; j++)
        {
            total += penjualan[i][j];
        }
        rata_rata[i] = total / 4;
    }
    max_rata_rata = rata_rata[0];
    max_kota = 0;
    for (i = 1; i < 3; i++)
    {
        if (rata_rata[i] > max_rata_rata)
        {
            max_rata_rata = rata_rata[i];
            max_kota = i;
        }
    }

    switch (max_kota)
    {
    case 0:
        printf("Kota dengan rata-rata penjualan tertinggi adalah kota Semarang dengan rata-rata %d\n", max_rata_rata);
        break;
    case 1:
        printf("Kota dengan rata-rata penjualan tertinggi adalah kota Jakarta dengan rata-rata %d\n", max_rata_rata);
        break;
    case 2:
        printf("Kota dengan rata-rata penjualan tertinggi adalah kota Yogyakarta dengan rata-rata %d\n", max_rata_rata);
        break;
    default:
        break;
    }

    return 0;
}