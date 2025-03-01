/*Nama File 	: BiayaKirim.c*/
/*Deskripsi 	: Menghitung biaya pengiriman barang*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 28 Februari 2025 08.00 */

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int berat, jarak, biaya;

    /*Algoritma*/
    scanf("%d %d", &berat, &jarak);
    biaya = 10000 + (berat * 5000) + (jarak * 2000);
    printf("%d", biaya);

    return 0;
}
