#include <stdio.h>

int main() 
{
    char symbol = '*';
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n*4 - i; i+=2) 
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
