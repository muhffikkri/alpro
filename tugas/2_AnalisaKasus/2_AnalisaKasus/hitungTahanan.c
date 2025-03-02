/*Nama File 	: hitungTahanan.c*/
/*Deskripsi 	: Menjumlahkan 3 buah input bilangan bulat jika ketiganya non-negatif*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 26 Februari 2025 10.10*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int i, j, k;

    /*Algoritma*/
    scanf("%d %d %d", &i, &j, &k);

    if (i < 0 || j < 0 || k < 0)
    {
        printf("Masukan tahanan tidak boleh negatif");
    }
    else
    {
        printf("Tahanan total = %d", i + j + k);
    }
    return 0;
}