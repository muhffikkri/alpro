#include <stdio.h>

int main()
{

    // Kolom = bulan
    // Baris = kota

    // Pertanyaan
    // 1. Kota apa dengan rata rata penjualan tertinggi?
    // 2. Kota apa dengan penjualan tertinggi pada bulan x?
    // 3. Bulan apa dengan rata rata penjualan tertinggi pada kota x?

    int kota, bulan;
    printf("Masukkan jumlah bulan: ");
    scanf("%d", &bulan);
    printf("Masukkan jumlah kota: ");
    scanf("%d", &kota);

    int penjualan[kota][bulan];
    for (int i = 0; i < kota; i++)
    {
        printf("Masukkan penjualan kota %d: ", i + 1);
        for (int j = 0; j < bulan; j++)
        {
            scanf("%d", &penjualan[i][j]);
        }
    }
    printf("\n");

    // 1. Kota apa dengan rata rata penjualan tertinggi?
    int rata_rata[kota];
    for (int i = 0; i < kota; i++)
    {
        int total = 0;
        for (int j = 0; j < bulan; j++)
        {
            total += penjualan[i][j];
        }
        rata_rata[i] = total / bulan;
    }
    int max_rata_rata = rata_rata[0];
    int max_kota = 0;
    for (int i = 1; i < kota; i++)
    {
        if (rata_rata[i] > max_rata_rata)
        {
            max_rata_rata = rata_rata[i];
            max_kota = i;
        }
    }
    printf("Kota dengan rata-rata penjualan tertinggi adalah kota %d dengan rata-rata %d\n", max_kota + 1, max_rata_rata);

    // 2. Kota apa dengan penjualan tertinggi pada bulan x?
    int bulan_x;
    printf("Masukkan bulan yang ingin dicari: ");
    scanf("%d", &bulan_x);
    int max_penjualan = penjualan[0][bulan_x - 1];
    int max_kota_bulan = 0;
    for (int i = 1; i < kota; i++)
    {
        if (penjualan[i][bulan_x - 1] > max_penjualan)
        {
            max_penjualan = penjualan[i][bulan_x - 1];
            max_kota_bulan = i;
        }
    }
    printf("Kota dengan penjualan tertinggi pada bulan %d adalah kota %d dengan penjualan %d\n", bulan_x + 1, max_kota_bulan + 1, max_penjualan);

    // 3. Bulan apa dengan rata-rata penjualan tertinggi pada kota x?
    int kota_x;
    printf("Masukkan kota yang ingin dicari: ");
    scanf("%d", &kota_x);
    int max_rata_rata_bulan = penjualan[kota_x - 1][0];
    int max_bulan = 0;
    for (int j = 1; j < bulan; j++)
    {
        if (penjualan[kota_x - 1][j] > max_rata_rata_bulan)
        {
            max_rata_rata_bulan = penjualan[kota_x - 1][j];
            max_bulan = j;
        }
    }
    printf("Bulan dengan rata-rata penjualan tertinggi pada kota %d adalah bulan %d dengan penjualan %d\n", kota_x + 1, max_bulan + 1, max_rata_rata_bulan);

    return 0;
}