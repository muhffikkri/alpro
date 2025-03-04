/*Nama File 	: JumDeret.c*/
/*Deskripsi 	: Jumlah deret bilangan ril C*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: <diisikan tanggal dan jam>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n, sum; /*variabel*/

    /*Algoritma*/
    scanf("%d", &n); /*input n*/
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Jumlah deret bilangan = %d\n", sum); /*output jumlah deret bilangan*/

    return 0;
}
