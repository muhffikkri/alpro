/*Nama File 	: BilPrimaN.c*/
/*Deskripsi 	: Menampilkan bilangan prima hingga bilangan ke n*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 21.30*/

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
        bilangan = 0;
        while (bilangan <= n)
        {
            faktor = 1;
            jumlahFaktor = 0;

            while (faktor <= bilangan)
            {
                if (bilangan % faktor == 0)
                {
                    jumlahFaktor++;
                    faktor++;
                }
                else
                {
                    faktor++;
                }
            }

            if (jumlahFaktor == 2)
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