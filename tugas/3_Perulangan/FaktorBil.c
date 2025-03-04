/*Nama File 	: FaktorBil.c*/
/*Deskripsi 	: Faktor bilangan yang dapat dibentuk oleh bilangan*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: <diisikan tanggal dan jam>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n, i;
    i = 1;

    /*Algoritma*/
    scanf("%d", &n); /*input n*/

    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
