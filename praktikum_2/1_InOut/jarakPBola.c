/*Nama File 	: jarakPBola.c*/
/*Deskripsi 	: Menghitung gerak parabola*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 28 Februari 2025 07.50 */

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    float v0, t, g, y;
    g = 9.8;

    /*Algoritma*/
    scanf("%f %f %f", &v0, &t, &g);
    y = v0 * t - 0.5 * (g * (t * t));
    printf("Jarak Parabola : %.3f", y);

    return 0;
}
