/*Nama File 	: JumDeret.c*/
/*Deskripsi 	: Jumlah deret bilangan bulat hingga bilangan ke n*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 20.20*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n, sum;
    sum = 0;

    /*Algoritma*/
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Jumlah deret bilangan = %d\n", sum);

    return 0;
}
