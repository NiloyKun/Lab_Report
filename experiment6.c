
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int m = 0; m < n - i - 1; m++)
        {
            printf("  ");
        }

        for (int j = 0; j <= i; j++)
        {
            int value = 1;

            for (int k = 1; k <= j; k++)
            {
                value = value * (i - k + 1) / k;
            }
            printf("%4d", value);
        }

        printf("\n");
    }

    return 0;
}
