// Find Area of Square formula : a = a2 
#include <stdio.h>

int main() {
    float a, area;

    printf("Enter the side length of the square: ");
    scanf("%f", &a);

    area = a * a;

    
    printf("The area of the square is: %.2f\n", area);
}