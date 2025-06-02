#include <stdio.h>
#include "gelas.h"

void isiPenuh(Gelas *g)
{
    (*g).isi = (*g).kapasitas;
}

void kosongkan(Gelas *g)
{
    (*g).isi = 0;
}

void isiDengan(Gelas *g, int volume)
{
    (*g).isi = volume;
}

void tuangKe(Gelas *dari, Gelas *ke)
{
    (*ke).isi = (*dari).isi;
    (*dari).isi = 0;
}

void tampilkanStatus(const Gelas *g)
{
    printf("Isi Gelas Sekarang : %d\n", (*g).isi);
}