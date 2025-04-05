#include <stdio.h>

void tukar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    tukar(&a, &b);

    printf("%d %d\n", a, b);
    return 0;
}
