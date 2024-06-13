
#include <stdio.h>

int main() {
    float a, surfaceArea;

    printf("Enter the side length of the cube: ");
    scanf("%f", &a);

    surfaceArea = 6.0f * a* a;

    printf("The surface area of the cube is: %.2f\n", surfaceArea);

}