/*Nama File 	: JumDeret.c*/
/*Deskripsi 	: Jumlah deret bilangan bulat hingga bilangan ke n*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 20.20*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n, i, sum;

    /*Algoritma*/
    scanf("%d", &n);
    sum = 0;
    if (n <= 0)
    {
        printf("n harus lebih besar dari nol\n");
        return 0;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        printf("Jumlah deret bilangan = %d\n", sum);
    }
    return 0;
}
