//     *
//    ***
//   *****
//  *******
// *********
#include <stdio.h>
int main() {
    int row=5, i, col, space;
    for (row= 1; i <= 5; row++) {
        for (space = 1; space <= row - i; space++) {
            printf(" ");
        }
for (col = 1; col<= 2 * i - 1; col++) {
            printf("*");
        }
printf("\n");
   }
}
