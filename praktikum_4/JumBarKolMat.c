#include <stdio.h>

void JumBarKolMat(int T[3][3], int baris, int kolom)
{
    // Menjumlahkan per baris
    for (int i = 0; i < baris; i++)
    {
        int sumRow = 0;
        for (int j = 0; j < kolom; j++)
        {
            sumRow += T[i][j];
        }
        printf("Baris ke-%d: %d\n", i + 1, sumRow);
    }

    // Menjumlahkan per kolom
    for (int j = 0; j < kolom; j++)
    {
        int sumCol = 0;
        for (int i = 0; i < baris; i++)
        {
            sumCol += T[i][j];
        }
        printf("Kolom ke-%d: %d\n", j + 1, sumCol);
    }
}

int main()
{
    int T[3][3] = {
        {1, 3, 5},
        {2, 5, 2},
        {4, 2, 4}};

    JumBarKolMat(T, 3, 3);
    return 0;
}
