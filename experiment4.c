#include <stdio.h>

int main() 
{
    char symbol = '*';
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * (n - i); j++)
            printf(" ");

        for (int j = 1; j <= 2 * i - 1; j++)

            printf("* ");

        printf("\n");
    }
    return 0;
}
