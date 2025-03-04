/*Nama File 	: CekBilPrima.c*/
/*Deskripsi 	: Cek bilangan prima*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: <diisikan tanggal dan jam>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n, i, j;

    /*Algoritma*/
    scanf("%d", &n); /*input n*/

    for (int k = 1; k <= n; k++)
    {
        i = 1;
        j = 0;

        while (i <= k)
        {
            if (j == 2)
            {
                printf("%d adalah bilangan prima", &n);
            }

            if (k % i == 0)
            {
                printf("%d\n", &k);
                j++;
            }
            i++;
        }
        printf("%d bukan bilangan prima", &k);
    }

    return 0;
}