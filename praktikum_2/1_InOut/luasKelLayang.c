/*Nama File 	: luasKelLayang.c*/
/*Deskripsi 	: Menghitung keliling dan luas layang-layang*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 1 Maret 2025 08.00 */

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    float s1, s2, d1, d2, keliling, luas;

    /*Algoritma*/
    scanf("%d %d %d %d", &s1, &s2, &d1, &d2);
    keliling = 2 * (s1 + s2);
    luas = (d1 * d2) / 2;
    printf("Keliling : %f\n", keliling);
    printf("Luas : %f\n", luas);

    return 0;
}
