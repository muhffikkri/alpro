/*Nama File 	: gayaSentr.c*/
/*Deskripsi 	: Menghitung gaya sentripetal*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 28 Februari 2025 07.00 */

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    float m, v, r, f;

    /*Algoritma*/
    scanf("%f %f %f", &m, &v, &r);
    f = m * ((v * v) / r);
    printf("%.3f", f);

    return 0;
}
