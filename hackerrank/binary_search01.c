#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int binary_search01(int arr[], int N, int left, int right)
{
    // Binary search to count data between left and right
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > left && arr[i] <= right)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N; // Number of elements
    scanf("%d", &N);
    int A[N]; // Array of elements

    // Element of an array
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int Q; // Number of boundaries
    scanf("%d", &Q);
    int X[Q]; // Array of left boundaries
    int Y[Q]; // Array of right boundaries

    // Left-Right boundaries
    for (int i = 0; i < Q; i++)
    {
        scanf("%d %d", &X[i], &Y[i]);
    }

    for (int i = 0; i < Q; i++)
    {
        int left = X[i];
        int right = Y[i];
        int result = binary_search01(A, N, left, right);
        printf("%d\n", result);
    }

    return 0;
}
