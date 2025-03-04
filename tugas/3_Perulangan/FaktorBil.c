/*Nama File 	: FaktorBil.c*/
/*Deskripsi 	: Faktor bilangan yang dapat dibentuk oleh bilangan n*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 20.40*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n, faktor;
    faktor = 1;

    /*Algoritma*/
    scanf("%d", &n);

    while (faktor <= n)
    {
        if (n % faktor == 0)
        {
            printf("%d\n", faktor);
        }
        faktor++;
    }

    return 0;
}
