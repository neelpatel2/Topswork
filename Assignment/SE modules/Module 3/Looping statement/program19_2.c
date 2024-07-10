#include <stdio.h>

int main() {
    char ch = 'A';
    int row, col;

    for (row = 1; row<= 5; row++) {
        for (col = 1; col <= row; col++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}
