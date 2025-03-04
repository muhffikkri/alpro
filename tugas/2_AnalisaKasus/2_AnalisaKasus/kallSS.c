/*Nama File 	: kallSS.c*/
/*Deskripsi 	: Kalkulator sederhana*/
/*Pembuat   	: 24060124130069-Muhammad Fikri*/
/*Tgl Pembuatan	: 26 Februari 2025 13.20*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int iA, iB;
    char operator;

    /*Algoritma*/
    scanf("%d %d %c", &iA, &iB, &operator);

    switch (operator)
    {
    case 'a':
        printf("A + B = %d", iA + iB);
        break;
    case 'b':
        printf("A - B = %d", iA - iB);
        break;
    case 'c':
        printf("A * B = %d", iA * iB);
        break;
    case 'd':
        if (iB != 0) // Cek pembagian dengan nol
            printf("A / B = %f", (float)iA / (float)iB);
        else
            printf("Error: Pembagian dengan nol");
        break;
    case 'e':
        if (iB != 0) // Cek pembagian dengan nol
            printf("A div B = %d\n", iA / iB);
        else
            printf("Error: Pembagian dengan nol\n");
        break;
    case 'f':
        if (iB != 0) // Cek modulus dengan nol
            printf("A mod B = %d", iA % iB);
        else
            printf("Error: Modulus dengan nol");
        break;
    default:
        printf("Bukan pilihan menu yang benar");
    }

    return 0;
}