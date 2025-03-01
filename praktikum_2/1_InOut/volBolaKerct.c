/*Nama File 	: volBolaKerct.c*/
/*Deskripsi 	: Menghitung volume bola dan kerucut*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 28 Februari 2025 07.20 */

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    float r, Vb, Vk, PHI;
    PHI = 3.1415;

    /*Algoritma*/
    scanf("%f", &r);
    Vb = 4.0 / 3.0 * (PHI * (r * r * r));
    Vk = 1.0 / 2.0 * Vb;
    printf("Volume bola %.3f \n", Vb);
    printf("Volume kerucut %.3f", Vk);

    return 0;
}
