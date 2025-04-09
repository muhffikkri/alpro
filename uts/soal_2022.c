#include <stdio.h>

void isiTabel(int T[], int n)
{
    // Kamus
    int i;    // Indeks untuk iterasi
    int elmt; // Elemen yang akan dimasukkan

    // Algoritma
    printf("Masukkan elemen-elemen tabel: ");
    i = 0;
    while (i < n)
    {
        scanf("%d", &elmt);
        if (elmt < 0)
        {
            printf("Nilai tidak boleh negatif\n");
        }
        else
        {
            T[i] = elmt;
            i++;
        }
    }
}

int Soal2(char T1[], char T2[])
{

    int sizeT1 = 5;
    int sizeT2 = 5;
    int i, j;
    int res;

    if (sizeT1 != sizeT2)
    {
        return 0; // Not anagrams if sizes are different
    }
    else
    {
        res = 0;
        i = 0;
        while (i < sizeT1)
        {
            j = 0;
            printf("index: %d\n", i);
            while (j < sizeT2)
            {
                if (T1[i] == T2[j] && T2[j] != '0')
                {
                    res++;
                    T2[j] = '0'; // Mark as used
                    j = sizeT2;  // Break inner loop if match found
                }
                j++;
            }
            if (res - 1 != i)
            {
                i = sizeT1; // Break outer loop if not an anagram
            }
            i++;
        }
        if (res == sizeT1)
        {
            return 1; // Anagrams
        }
        else
        {
            return 0; // Not anagrams
        }
    }
}

void ReverseArray(int T[], int size)
{
    int start = 0, end = size - 1, temp;
    while (start < end)
    {
        temp = T[start];
        T[start] = T[end];
        T[end] = temp;
        start++;
        end--;
    }
}

int Soal3(int T1[], int T2[], int n1, int n2)
{
    // Kamus
    int i, j, k; // Indeks untuk iterasi
    int sum;     // Penjumlahan sub array
    int carry;
    int n = 8; // Ukuran tabel
    // printf("Masukkan banyaknya elemen T: ");
    // scanf("%d", &n);
    int T[8];
    int digit1, digit2;

    // Algoritma
    ReverseArray(T1, n1);
    ReverseArray(T2, n2);

    sum = 0;
    carry = 0;
    i = 0;
    j = 0;
    k = 0;

    while (i < n1 || j < n2 || carry > 0)
    {
        if (i < n1)
        {
            digit1 = T1[i];
        }
        else
        {
            digit1 = 0;
        }
        if (j < n2)
        {
            digit2 = T2[j];
        }
        else
        {
            digit2 = 0;
        }
        sum = digit1 + digit2 + carry;
        T[k] = sum % 10;  // Store the last digit of the sum
        carry = sum / 10; // Carry the remaining value
        i++;
        j++;
        k++;
    }

    ReverseArray(T, n);
    printf("Hasil penjumlahan: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}

int Soal4()
{
    int i; // Indeks untuk iterasi
    int n; // Ukuran tabel
    printf("Masukkan banyaknya elemen: ");
    scanf("%d", &n);
    int T[n]; // Tabel untuk menyimpan elemen
    isiTabel(T, n);
    int Trev[n]; // Tabel untuk menyimpan elemen terbalik
    ReverseArray(T, n);

    // Algoritma
    for (i = 0; i < n; i++)
    {
        if (T[i] != Trev[i])
        {
            printf("Tabel tidak palindrom\n");
            return 0;
        }
    }
    return 1; // Tabel palindrom
}

int main()
{
    // printf("Soal 2\n");
    // char T1[] = "reset";
    // char T2[] = "steer";

    // if (Soal2(T1, T2))
    // {
    //     printf("T1 and T2 are anagrams.\n");
    // }
    // else
    // {
    //     printf("T1 and T2 are not anagrams.\n");
    // }

    // printf("Soal 3\n");
    // // printf("Masukkan banyaknya elemen T1 dan T2:\n ");
    // int n1 = 7, n2 = 6;
    // // scanf("%d", &n1);
    // // scanf("%d", &n2);

    // int T1[7] = {1, 3, 4, 5, 7, 8, 9};
    // int T2[6] = {9, 3, 7, 5, 7, 8};
    // // isiTabel(T1, n1);
    // // isiTabel(T2, n2);
    // Soal3(T1, T2, n1, n2);

    return 0;
}
