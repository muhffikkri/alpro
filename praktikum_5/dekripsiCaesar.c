#include <stdio.h>
#include <string.h>

void dekripsiCaesar(char str[], int n)
{
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = ((str[i] - 'a' - n + 26) % 26) + 'a';
        }
    }

    printf("%s\n", str);
}

int main()
{
    int n;
    char str[105]; // Sesuai batasan, cukup besar untuk input

    scanf("%d", &n);
    scanf("%s", str);

    dekripsiCaesar(str, n);

    return 0;
}
