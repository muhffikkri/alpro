/*Nama File 	: jarakGLBB.c*/
/*Deskripsi 	: Menghitung jarak gerak lurus bebas beraturan*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 1 Maret 2025 07.40 */

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    float v0, t, a, s;

    /*Algoritma*/
    scanf("%f %f %f", &v0, &t, &a);
    s = v0 * t + 0.5 * (a * (t * t));
    printf("Jarak GLBB : %.3f", s);

    return 0;
}
