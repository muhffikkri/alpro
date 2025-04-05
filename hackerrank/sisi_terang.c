#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, k;

    scanf("%d %d", &n, &k);

    int jalan[n], terang[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &jalan[i]);

        terang[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {

        if (jalan[i] == 1)
        {

            for (int j = (i - k < 0 ? 0 : i - k); j <= (i + k >= n ? n - 1 : i + k); j++)
            {

                terang[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (terang[i] == 0)
        {

            printf("NO\n");

            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
