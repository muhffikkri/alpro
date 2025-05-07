#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int binary_search02(int arr[], int N, int question)
{
    // Binary search to check the question fit in left and right of the an array
    int right = 1;
    for (int left = 0; left < N; left++)
    {
        if (question <= arr[left])
        {
            return left + 1;
        }
        else if (question - arr[left] <= arr[right])
        {
            return right + 1;
        }
        else
        {
            right++;
            question -= arr[left];
        }
    }
    return 0;
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

    int Q; // Number of questions
    scanf("%d", &Q);
    int X[Q]; // Array of left questions

    // Array of questions
    for (int i = 0; i < Q; i++)
    {
        scanf("%d", &X[i]);
    }

    for (int i = 0; i < Q; i++)
    {
        int question = X[i];
        int result = binary_search02(A, N, question);
        printf("%d\n", result);
    }

    return 0;
}
