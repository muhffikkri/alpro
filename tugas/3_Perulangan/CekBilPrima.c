/*Nama File 	: CekBilPrima.c*/
/*Deskripsi 	: Menmeriksa sebuah bilangan apakah prima*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 21.00*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n, faktor, jumlahFaktor;
    faktor = 1;
    jumlahFaktor = 0;

    /*Algoritma*/
    scanf("%d", &n); /*input n*/

    while (faktor <= n)
    {
        if (n % faktor == 0)
        {
            jumlahFaktor++;
        }
        faktor++;
    }

    if (jumlahFaktor == 2)
    {
        printf("%d adalah bilangan prima\n", n);
    }
    else
    {
        printf("%d bukan bilangan prima\n", n);
    }

    return 0;
}
