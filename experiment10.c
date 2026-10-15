#include <stdio.h>
int main() {
    
    int n = 5;
    char ch = '*';

    for (int j = 0; j < n; j++)
    { 
            printf("%c ", ch);
    }
    printf("\n");
  
    for (int i = 0; i < n - 2; i++)
    {
        printf("%c ", ch);
        for (int j = 0; j < n - 2; j++)
        {
            printf("  ");
        }
        printf("%c\n", ch);
    }
    for (int j = 0; j < n; j++)
    {
        printf("%c ", ch);
    }
    printf("\n");

    return 0;
}
