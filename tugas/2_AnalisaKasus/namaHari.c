/*Nama File 	: namaHari.c*/
/*Deskripsi 	: Menampilkan nama hari tergantung dari nilai input*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 28 Februari 2025 10.30*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int hari;

    /*Algoritma*/
    scanf("%d", &hari);

    if (hari < 1 || hari > 7)
    {
        printf("Masukan nomor hari tidak tepat");
    }
    else
    {
        switch (hari)
        {
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jumat");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;
        }
    }

    return 0;
}