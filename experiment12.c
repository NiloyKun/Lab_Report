#include <stdio.h>

int main() {
    int rows = 3;
    int peaks = 4;
    int width = (peaks-- * 4)+ 1;   

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < width; j++) {
            if ((i == 0 && j % 4 == 0) ||(i == 1 && j % 2 == 1)||
                (i == 2 && j % 4 == 2))
            {     
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}