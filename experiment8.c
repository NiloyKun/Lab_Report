#include <stdio.h>

int main() 
{
    int a = 1;
    for (int i = 1; i <= 5; i++) 
    {
        for ( a = 1; a <= i; a++) 
        {
            printf("%d ", a);
        }
        
        printf("\n");
    }

    return 0;
}