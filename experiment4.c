#include <stdio.h>

int main() 
{
    char symbol = '*';
    for (int i = 9; i >= 1; i-=2) 
    {
        for (int k = 9; k > i; k--) 
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++) 
        {
            printf("%c ", symbol);
        }
        printf("\n");
        
    }
    return 0;
}
