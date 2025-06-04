#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float mean(float a, float b)
{
    return (a + b) / 2;
}

void insertionSort(int arr[], int N)
{
    for (int i = 1; i < N; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int centralValue(float arr[], int N)
{
    return arr[(N - 1) / 2];
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, i, j, k;
    float result, resultGanjil, resultGenap;
    scanf("%d", &N);
    int A[N];
    int nGenap = 0, nGanjil = 0;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0)
        {
            nGenap++;
        }
        else
        {
            nGanjil++;
        }
    }

    insertionSort(A, N);

    float AGenap[nGenap], AGanjil[nGanjil];

    for (i = 0; i < nGenap; i++)
    {
        AGenap[i] = 0.0;
    }

    for (i = 0; i < nGanjil; i++)
    {
        AGanjil[i] = 0.0;
    }

    j = 0;
    k = 0;
    for (i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            AGenap[j] = A[i];
            j++;
        }
        else
        {
            AGanjil[k] = A[i];
            k++;
        }
    }

    if (nGenap == 0)
    {
        if (nGanjil % 2 == 0)
        {
            result = mean(AGanjil[nGanjil / 2], AGanjil[(nGanjil - 1) / 2]);
        }
        else
        {
            result = centralValue(AGanjil, nGanjil);
        }
    }
    else if (nGanjil == 0)
    {
        if (nGenap % 2 == 0)
        {
            result = mean(AGenap[nGenap / 2], AGenap[(nGenap - 1) / 2]);
        }
        else
        {
            result = centralValue(AGenap, nGenap);
        }
    }
    else
    {
        if (nGanjil % 2 == 0)
        {
            resultGanjil = mean(AGanjil[nGanjil / 2], AGanjil[(nGanjil - 1) / 2]);
        }
        else
        {
            resultGanjil = centralValue(AGanjil, nGanjil);
        }

        if (nGenap % 2 == 0)
        {
            resultGenap = mean(AGenap[nGenap / 2], AGenap[(nGenap - 1) / 2]);
        }
        else
        {
            resultGenap = centralValue(AGenap, nGenap);
        }

        result = mean(resultGanjil, resultGenap);
    }

    printf("%.3f\n", result);

    return 0;
}
