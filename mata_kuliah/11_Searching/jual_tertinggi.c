/*Nama File 	: jual_tertinggi.c*/
/*Deskripsi 	: Menghitung rata rata penjualan tertinggi keseluruhan*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 17 Mei 2025*/

#include <stdio.h>

int main()
{
    // Kamus
    int penjualan[3][4] = {{10, 15, 10, 5},
                           {20, 25, 20, 15},
                           {10, 5, 14, 3}};
    int max_penjualan;
    int total;
    int i, j;
    int kota, bulan;

    // Algoritma
    max_penjualan = penjualan[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (penjualan[i][j] > max_penjualan)
            {
                max_penjualan = penjualan[i][j];
                kota = i;
                bulan = j;
            }
        }
    }

    printf("Penjualan tertinggi adalah kota %d pada bulan %d dengan penjualan %d\n", kota, bulan + 1, max_penjualan);

    return 0;
}