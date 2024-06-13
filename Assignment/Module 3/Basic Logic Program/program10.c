// Surface area of Rectangle Prism
#include <stdio.h>

int main() {
    float width, length, height, surfaceArea;

    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &width);

    printf("Enter the length of the rectangular prism: ");
    scanf("%f", &length);

    printf("Enter the height of the rectangular prism: ");
    scanf("%f", &height);

    surfaceArea = 2.0f * (width * length + height * length + height * width);

    printf("The surface area of the rectangular prism is: %.2f\n", surfaceArea);

    return 0;
}
