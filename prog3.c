#include <stdio.h>
#include <string.h>

typedef struct
{
    int nim;
    char nama[50];
    int nilai;
} Rekaman;

int main()
{
    /* Kamus */
    FILE *ArsipMhs;
    Rekaman RekMhs;
    int SumNil, JumMhs;

    /* Algoritma */
    ArsipMhs = fopen("mahasiswa.txt", "r");

    if (ArsipMhs == NULL)
    {
        printf("File gagal dibuat.\n");
        return 1;
    }

    SumNil = 0;
    JumMhs = 0;

    fscanf(ArsipMhs, "%d,%49[^,],%d", &RekMhs.nim, RekMhs.nama, &RekMhs.nilai);
    while (RekMhs.nim != 99999)
    {
        SumNil += RekMhs.nilai;
        JumMhs += 1;
        fscanf(ArsipMhs, "%d,%49[^,],%d", &RekMhs.nim, RekMhs.nama, &RekMhs.nilai);
    }

    if (JumMhs == 0)
    {
        printf("Arsip kosong!\n");
    }
    else
    {
        printf("Rata-ratanya adalah %d.\n", SumNil / JumMhs);
    }

    fclose(ArsipMhs);

    return 0;
}
