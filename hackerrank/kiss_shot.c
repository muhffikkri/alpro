#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    int iterations = 0;

    while (arr[0] > 0 || arr[1] > 0 || arr[2] > 0 || arr[3] > 0)
    {
        int reduce = 3; // Default reduce value

        if (arr[0] > 0 && reduce > 0)
        {
            if (arr[0] >= 3)
            {
                arr[0] -= reduce;
                reduce = 0;
            }
            else
            {
                reduce -= arr[0];
                arr[0] = 0;
            }
        }
        else if (arr[1] > 0 && reduce > 0)
        {
            if (arr[1] >= 3)
            {
                arr[1] -= reduce;
                reduce = 0;
            }
            else
            {
                reduce -= arr[1];
                arr[1] = 0;
            }
        }

        if (arr[2] > 0 && reduce > 0)
        {
            if (arr[2] >= 3)
            {
                arr[2] -= reduce;
                reduce = 0;
            }
            else
            {
                if (reduce >= arr[2])
                {
                    arr[2] = 0;
                }
                else
                {
                    arr[2] -= reduce;
                }
            }
        }
        else if (arr[3] > 0 && reduce > 0)
        {
            if (arr[3] >= 3)
            {
                arr[3] -= reduce;
                reduce = 0;
            }
            else
            {
                if (reduce >= arr[3])
                {
                    arr[3] = 0;
                }
                else
                {
                    arr[3] -= reduce;
                }
            }
        }

        iterations++;
    }

    printf("%d\n", iterations);

    return 0;
}