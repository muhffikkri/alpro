/*Nama File 	: luasKelLayang.c*/
/*Deskripsi 	: Menghitung keliling dan luas layang-layang*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 28 Februari 2025 07.50 */

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int s1, s2, d1, d2, keliling, luas;

    /*Algoritma*/
    scanf("%d %d %d %d", &s1, &s2, &d1, &d2);
    keliling = 2 * (s1 + s2);
    luas = (d1 * d2) / 2;
    printf("%d\n", keliling);
    printf("%d\n", luas);

    return 0;
}
