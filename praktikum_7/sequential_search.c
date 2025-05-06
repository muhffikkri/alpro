#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int x = 3;
    int i = 0;
    bool found = false;
    while (i < 5)
    {
        if (arr[i] == x)
        {
            found = true;
        }
        i++;
    }
    printf("nilai found: %s\n", found ? "true" : "false");
    return 0;
}