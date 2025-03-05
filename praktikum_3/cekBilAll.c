/*Nama File 	: CekBilAll.c*/
/*Deskripsi 	: Memeriksa apakah sebuah bilangan sempurna atau prima atau bukan keduanya*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 22.00*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n, faktor, sempurna, prima;

    /*Algoritma*/
    scanf("%d", &n);

    faktor = 1;
    sempurna = 0;
    prima = 0;
    while (faktor <= n)
    {
        if (n % faktor == 0)
        {
            sempurna = sempurna + faktor;
            prima++;
        }
        faktor++;
    }

    if ((sempurna - n) == n)
    {
        printf("%d bilangan sempurna\n", n);
    }
    else if (prima == 2)
    {
        printf("%d bilangan prima\n", n);
    }
    else
    {
        printf("%d bilangan biasa\n", n);
    }

    return 0;
}