// Circumfarance of Square
#include <stdio.h>

int main() {
    float side, circumference;

    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    circumference = 4.0f * side;

    printf("The circumference of the square is: %.2f\n", circumference);

    return 0;
}
