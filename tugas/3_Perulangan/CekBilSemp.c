/*Nama File 	: CekBilSemp.c*/
/*Deskripsi 	: Cek bilangan Sempurna*/
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

    while (i < n)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            j = j + i;
            j++;
        }
        i++;
    }

    if (j == n)
    {
        printf("Bilangan %d adalah bilangan sempurna\n", n);
    }
    else
    {
        printf("Bilangan %d bukan bilangan sempurna\n", n);
    }

    return 0;
}