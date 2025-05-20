/*Nama File 	: jual_terendah.c*/
/*Deskripsi 	: Menghitung rata rata penjualan terendah keseluruhan*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 17 Mei 2025*/

#include <stdio.h>

int main()
{
    // Kamus
    int penjualan[3][4] = {{10, 15, 10, 5},
                           {20, 25, 20, 15},
                           {10, 5, 14, 3}};
    int min_penjualan;
    int total;
    int i, j;
    int kota, bulan;

    // Algoritma
    min_penjualan = penjualan[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (penjualan[i][j] < min_penjualan)
            {
                min_penjualan = penjualan[i][j];
                kota = i;
                bulan = j;
            }
        }
    }

    printf("Penjualan terendah adalah kota %d pada bulan %d dengan penjualan %d\n", kota, bulan + 1, min_penjualan);

    return 0;
}