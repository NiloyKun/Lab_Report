#include <stdio.h>
int main() 
{
    char symbol = '*';
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            printf("%c ", symbol);
        }
        printf("\n");
    }
    return 0;
}
