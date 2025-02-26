#include <stdio.h>

int bilinteger()
{
    int i;
    scanf("%d", &i);

    if (i < 0)
    {
        printf("Bilangan i bernilai negatif");
    }
    else if (i == 0)
    {
        printf("Bilangan i adalah nol");
    }
    else
    {
        printf("Bilangan i bernilai positif");
    };

    return 0;
}

int namaHari()
{
    int hari;
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
        case 3:
            printf("Rabu");
        case 4:
            printf("Kamis");
        case 5:
            printf("Jumat");
        case 6:
            printf("Sabtu");
        case 7:
            pritnf("Minggu");
        }
    }
}

int namaBulan()
{
    int bulan;
    scanf("%d", &bulan);
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
            pritnf("Juli");
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

int hitungTahanan()
{
    int i, j, k;
    scanf("%d %d %d", &i, &j, &k);
    if (i < 0 || j < 0 || k < 0)
    {
        printf("Masukan tahanan tidak boleh negatif");
    }
    else
    {
        printf("Tahanan total = %d", i + j + k);
    }
    return 0;
}

int main()
{
    bilinteger();
    namahari();
    namabulan();
    hitungTahanan();

    return 0;
}