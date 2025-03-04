/*Nama File 	: CekBilPrima.c*/
/*Deskripsi 	: Menampilkan bilangan prima*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: <diisikan tanggal dan jam>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n, i, j;
    i = 1;
    j = 0;

    /*Algoritma*/
    scanf("%d", &n); /*input n*/

    while (i <= n)
    {
        if (j == 2)
        {
            printf("%d adalah bilangan prima", &n);
        }

        if (n % i == 0)
        {
            printf("%d\n", i);
            j++;
        }
        i++;
    }

    printf("i bukan bilangan prima");

    return 0;
}
