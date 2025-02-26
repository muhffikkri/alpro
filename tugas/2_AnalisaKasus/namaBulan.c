/*Nama File 	: namaBulan.c*/
/*Deskripsi 	: Menampilkan nama bulan tergantung dari nilai input*/
/*Pembuat   	: 24060124130069*/
/*Tgl Pembuatan	: 26 Februari 2025 10.20*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int bulan;
    scanf("%d", &bulan);

    /*Algoritma*/
    if (bulan < 1 || bulan > 7)
    {
        printf("Masukan nomor bulan tidak tepat");
    }
    else
    {
        switch (bulan)
        {
        case 1:
            printf("Januari");
            break;
        case 2:
            printf("Februari");
            break;
        case 3:
            printf("Maret");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("Mei");
            break;
        case 6:
            printf("Juni");
            break;
        case 7:
            printf("Juli");
            break;
        case 8:
            printf("Agustus");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("Oktober");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("Desember");
            break;
        }
    }
    return 0;
}