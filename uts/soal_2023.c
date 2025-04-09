#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Primitif Mesin Karakter
void START();
void ADV();
char GETCC();
bool EOP();

// Variabel global untuk Mesin Karakter
char currentChar;
bool endOfProcess;
char pitaKarakter[256]; // Pita karakter
int indeks;             // Indeks untuk membaca pita karakter

// Fungsi untuk mengecek apakah karakter adalah pemisah kata
bool isSeparator(char c)
{
    return c == ' ' || c == ',' || c == '.';
}

// Implementasi Mesin Karakter
void START()
{
    indeks = 0;
    currentChar = pitaKarakter[indeks];
    endOfProcess = (currentChar == '\0');
}

void ADV()
{
    indeks++;
    currentChar = pitaKarakter[indeks];
    endOfProcess = (currentChar == '\0');
}

char GETCC()
{
    return currentChar;
}

bool EOP()
{
    return endOfProcess;
}

// Program utama
int main()
{
    int countLE = 0;            // Variabel untuk menghitung kata yang diakhiri dengan 'LE'
    char prevChar = '\0';       // Karakter sebelumnya
    char secondPrevChar = '\0'; // Karakter dua langkah sebelumnya

    // Input pita karakter
    printf("Masukkan pita karakter: ");
    fgets(pitaKarakter, sizeof(pitaKarakter), stdin);
    pitaKarakter[strcspn(pitaKarakter, "\n")] = '\0'; // Menghapus newline jika ada

    // Inisialisasi Mesin Karakter
    START();

    while (!EOP())
    {
        if (isSeparator(currentChar))
        {
            // Cek apakah kata sebelumnya diakhiri dengan 'LE'
            if (secondPrevChar == 'L' && prevChar == 'E')
            {
                countLE++;
            }
            // Reset karakter sebelumnya
            secondPrevChar = '\0';
            prevChar = '\0';
        }
        else
        {
            // Geser karakter sebelumnya
            secondPrevChar = prevChar;
            prevChar = currentChar;
        }
        ADV();
    }

    // Cek kata terakhir jika tidak diakhiri separator
    if (secondPrevChar == 'L' && prevChar == 'E')
    {
        countLE++;
    }

    // Output hasil
    printf("Jumlah kata yang diakhiri dengan 'LE': %d\n", countLE);

    return 0;
}