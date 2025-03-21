/*Nama File 	: JumBarKolMat.c*/
/*Deskripsi 	: Menjumlahkan tiap baris dan kolom sebuah tabel*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 21.30*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int T[3][3] = {
        {1, 3, 5},
        {2, 5, 2},
        {4, 2, 4}};                             // Tabel 2 dimensi
    int baris = sizeof(T) / sizeof(T[0]);       // Ukuran tabel
    int kolom = sizeof(T[0]) / sizeof(T[0][0]); // Ukuran tabel

    // Di notal nilai array gaperlu diisi dan diasumsikan kapasitas array nya 10, jadi n = 10

    int sumRow; // Jumlah per baris
    int sumCol; // Jumlah per kolom
    int i, j;   // Counter

    /*Algoritma*/
    // Menjumlahkan per baris
    for (i = 0; i < baris; i++)
    {
        sumRow = 0;
        for (j = 0; j < kolom; j++)
        {
            sumRow += T[i][j];
        }
        printf("Baris ke-%d: %d\n", i + 1, sumRow);
    }

    // Menjumlahkan per kolom
    for (j = 0; j < kolom; j++)
    {
        sumCol = 0;
        for (i = 0; i < baris; i++)
        {
            sumCol += T[i][j];
        }
        printf("Kolom ke-%d: %d\n", j + 1, sumCol);
    }
    return 0;
}
