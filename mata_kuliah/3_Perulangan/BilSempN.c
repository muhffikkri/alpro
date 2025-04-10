/*Nama File 	: BilSempN.c*/
/*Deskripsi 	: Menampilkan bilangan sempurna hingga bilangan ke n*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 21.45*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n, bilangan, faktor, jumlahFaktor;

    /*Algoritma*/
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("n harus lebih besar dari nol\n");
        return 0;
    }
    else
    {
        while (bilangan <= n)
        {
            faktor = 1;
            jumlahFaktor = 0;

            while (faktor < bilangan)
            {
                if (bilangan % faktor == 0)
                {
                    jumlahFaktor = jumlahFaktor + faktor;
                    faktor++;
                }
                else
                {
                    faktor++;
                }
            }

            if (jumlahFaktor == bilangan)
            {
                printf("%d\n", bilangan);
                bilangan++;
            }
            else
            {
                bilangan++;
            }
        }
    }

    return 0;
}