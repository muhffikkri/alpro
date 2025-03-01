/*Nama File 	: CekSegitiga.c*/
/*Deskripsi 	: Mengecek jenis segitiga*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 26 Februari 2025 11.00*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int i, j, k;

    /*Algoritma*/
    scanf("%d %d %d", &i, &j, &k);

    if (i <= 0 || j <= 0 || k <= 0)
    {
        printf("Terdapat nilai yang bukan sisi segitiga\n");
    }
    else
    {
        if (i == j && j == k)
        {
            printf("Segitiga sama sisi\n");
        }
        else if (i == j || j == k || i == k)
        {
            printf("Segitiga sama kaki\n");
        }
        else
        {
            printf("Segitiga sembarang\n");
        }
    }

    return 0;
}