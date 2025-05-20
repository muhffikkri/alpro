/*Nama File 	: jual_kota.c*/
/*Deskripsi 	: Menampilkan bulan dengan penjualan tertinggi pada kota tertentu*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 17 Mei 2025*/

#include <stdio.h>

int main()
{
    int penjualan[3][4] = {{10, 15, 10, 5},
                           {20, 25, 20, 15},
                           {10, 5, 14, 3}};
    int j;
    int kota_x;
    printf("Masukkan kota yang ingin dicari: ");
    scanf("%d", &kota_x);
    int max_rata_kota;
    int max_kota;

    max_rata_kota = penjualan[kota_x - 1][0];
    max_kota = 0;
    for (j = 1; j < 4; j++)
    {
        if (penjualan[kota_x - 1][j] > max_rata_kota)
        {
            max_rata_kota = penjualan[kota_x - 1][j];
            max_kota = j;
        }
    }
    printf("Bulan dengan penjualan tertinggi pada kota %d adalah bulan %d dengan penjualan %d\n", kota_x, max_kota + 1, max_rata_kota);
    return 0;
}