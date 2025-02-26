/*Nama File 	: bilInteger.c*/
/*Deskripsi 	: Mengecek apakah suatu nilai merupakan positif, negatif, atau nol*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 26 Februari 2025 10.00*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int i;
    scanf("%d", &i);

    /*Algoritma*/
    if (i > 0)
    {
        printf("Bilangan i bernilai positif");
    }
    else if (i == 0)
    {
        printf("Bilangan i adalah nol");
    }
    else
    {
        printf("Bilangan i bernilai negatif");
    };

    return 0;
}