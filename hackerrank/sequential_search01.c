#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int difference(int a, int b)
{
    if (a > b)
    {
        return a - b;
    }
    else
    {
        return b - a;
    }
}

int sequential_search01(int arr[], int N, int X)
{
    int closest = arr[0];
    int min_diff = difference(arr[0], X);

    for (int i = 1; i < N; i++)
    {
        int current_diff = difference(arr[i], X);
        if (current_diff < min_diff)
        {
            closest = arr[i];
            min_diff = current_diff;
        }
        else if (current_diff == min_diff)
        {
            if (arr[i] < closest)
            {
                closest = arr[i];
            }
        }
    }

    return closest;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, X;
    scanf("%d %d", &N, &X);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int result = sequential_search01(A, N, X);
    printf("%d\n", result);

    return 0;
}
