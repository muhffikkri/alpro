/*Nama File 	: BilSempN.c*/
/*Deskripsi 	: Menampilkan bilangan sempurna hingga bilangan ke n*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 21.45*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n, faktor, jumlahFaktor;

    /*Algoritma*/
    scanf("%d", &n);

    for (int bilangan = 1; bilangan <= n; bilangan++)
    {
        faktor = 1;
        jumlahFaktor = 0;

        while (faktor < bilangan)
        {
            if (bilangan % faktor == 0)
            {
                jumlahFaktor = jumlahFaktor + faktor;
            }
            faktor++;
        }

        if (jumlahFaktor == bilangan)
        {
            printf("%d\n", bilangan);
        }
    }

    return 0;
}