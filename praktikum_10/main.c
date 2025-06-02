#include <stdio.h>
#include "gelas.h"

int main()
{
    Gelas g1, g2;
    g1.isi = 0;
    g1.kapasitas = 100;
    g2.kapasitas = 100;

    tampilkanStatus(&g1);
    isiPenuh(&g1);
    tampilkanStatus(&g1);

    tuangKe(&g1, &g2);
    tampilkanStatus(&g1);
    tampilkanStatus(&g2);

    kosongkan(&g2);
    tampilkanStatus(&g2);
}
