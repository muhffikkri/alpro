/*Nama File 	: FrekNilTabel.c*/
/*Deskripsi 	: Menampilkan bilangan yang frekuensi kemunculan nya lebih dari satu kali*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 5 Maret 2025 21.30*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int T[] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4}; // Tabel
    int n = sizeof(T) / sizeof(T[0]);         // Ukuran tabel

    // Di notal nilai array gaperlu diisi dan diasumsikan kapasitas array nya 10, jadi n = 10

    int count[10] = {0}; // Frekuensi kemunculan
    int i;               // Counter

    /*Algoritma*/
    printf("Elemen yang muncul lebih dari satu kali: ");

    for (i = 0; i < n; i++)
    {
        count[T[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (count[T[i]] > 1)
        {
            printf("%d ", T[i]);
            count[T[i]] = 0; // Hindari pencetakan ulang
        }
    }

    printf("\n");
    return 0;
}
