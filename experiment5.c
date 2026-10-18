#include <stdio.h>

int main() {
    char symbol = '*';
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int k = n; k > i; k--) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%c ", symbol);
        }

        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int k = n; k > i; k--) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%c ", symbol);
        }

        printf("\n");
    }

    return 0;
}
