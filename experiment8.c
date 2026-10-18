#include <stdio.h>

int main() 
{
    int a = 1;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        for ( a = 1; a <= i; a++) 
        {
            printf("%d ", a);
        }
        
        printf("\n");
    }

    return 0;
}
