/*Nama File 	: CekBilSemp.c*/
/*Deskripsi 	: Menmeriksa sebuah bilangan apakah sempurna*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 21.15*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int n, faktor, jumlahFaktor;

    /*Algoritma*/
    scanf("%d", &n);

    faktor = 1;
    jumlahFaktor = 0;
    if (n <= 0)
    {
        printf("n harus lebih besar dari nol\n");
        return 0;
    }
    else
    {
        while (faktor < n)
        {
            if (n % faktor == 0)
            {
                jumlahFaktor = jumlahFaktor + faktor;
            }
            faktor++;
        }

        if (jumlahFaktor == n)
        {
            printf("Bilangan %d adalah bilangan sempurna\n", n);
        }
        else
        {
            printf("Bilangan %d bukan bilangan sempurna\n", n);
        }
    }
    return 0;
}