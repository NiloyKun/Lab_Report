#include <stdio.h>

int main() {

    char ch = '*';
    int n;
    scanf("%d", &n);
//one side
    for (int i = 1; i <= n; i++){

        for (int j = 1; j <= i; j++){
            printf("%c ", ch);
        }
        for (int j = 1; j <= 2 * (n - i); j++){
            printf("  ");
        }
        for (int j = 1; j <= i; j++){
            printf("%c ", ch);
        }

        printf("\n");
    }
//Another side
    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            printf("%c ", ch);
        }
        for (int j = 1; j <= 2 * (n - i); j++){
            printf("  ");
        }
        for (int j = 1; j <= i; j++){
            printf("%c ", ch);
        }

        printf("\n");
    }

    return 0;
}
