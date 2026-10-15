#include <stdio.h>

int main() 
{
    char symbol = '*';
    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            printf("%c ", symbol);
        }
        printf("\n");
    }
    return 0;
}