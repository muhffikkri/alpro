/*Nama File 	: jual_bulan.c*/
/*Deskripsi 	: Menghitung rata rata penjualan tertinggi pada bulan tertentu*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 17 Mei 2025*/

#include <stdio.h>

int main()
{
    // Kamus
    int penjualan[3][4] = {{10, 15, 10, 5},
                           {20, 25, 20, 15},
                           {10, 5, 14, 3}};
    int i;
    int bulan_x;
    printf("Masukkan bulan yang ingin dicari: ");
    scanf("%d", &bulan_x);
    int max_rata_bulan;
    int max_bulan;

    // Algoritma
    max_rata_bulan = penjualan[0][bulan_x - 1];
    max_bulan = 0;
    for (i = 1; i < 3; i++)
    {
        if (penjualan[i][bulan_x - 1] > max_rata_bulan)
        {
            max_rata_bulan = penjualan[i][bulan_x - 1];
            max_bulan = i;
        }
    }
    printf("Kota dengan penjualan tertinggi pada bulan %d adalah kota %d dengan penjualan %d\n", bulan_x, max_bulan + 1, max_rata_bulan);
    return 0;
}