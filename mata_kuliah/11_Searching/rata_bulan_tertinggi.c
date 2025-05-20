/*Nama File 	: rata_bulan_tertinggi.c*/
/*Deskripsi 	: Menghitung bulan dengan rata rata penjualan tertinggi*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 17 Mei 2025 */

#include <stdio.h>

int main()
{
    // Kamus
    int penjualan[3][4] = {{10, 15, 10, 5},
                           {20, 25, 20, 15},
                           {10, 5, 14, 3}};
    int rata_rata[4];
    int total;
    int i, j;
    int max_rata_rata;
    int max_bulan;

    // Algoritma
    for (i = 0; i < 4; i++)
    {
        total = 0;
        for (j = 0; j < 3; j++)
        {
            total += penjualan[j][i];
        }
        rata_rata[i] = total / 3;
    }
    max_rata_rata = rata_rata[0];
    max_bulan = 0;
    for (i = 1; i < 4; i++)
    {
        if (rata_rata[i] > max_rata_rata)
        {
            max_rata_rata = rata_rata[i];
            max_bulan = i;
        }
    }

    switch (max_bulan)
    {
    case 0:
        printf("Bulan dengan rata-rata penjualan tertinggi adalah bulan Januari dengan rata-rata %d\n", max_rata_rata);
        break;
    case 1:
        printf("Bulan dengan rata-rata penjualan tertinggi adalah bulan Februari dengan rata-rata %d\n", max_rata_rata);
        break;
    case 2:
        printf("Bulan dengan rata-rata penjualan tertinggi adalah bulan Maret dengan rata-rata %d\n", max_rata_rata);
        break;
    case 3:
        printf("Bulan dengan rata-rata penjualan tertinggi adalah bulan April dengan rata-rata %d\n", max_rata_rata);
        break;

    default:
        break;
    }

    return 0;
}