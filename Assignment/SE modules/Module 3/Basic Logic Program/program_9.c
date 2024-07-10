// To find circumfarance of Triangle
#include <stdio.h>

int main() {
    float a, b, c; 
    printf("Enter the lengths of the triangle sides: ");
    scanf("%f %f %f", &a, &b, &c);

    float circumference = a + b + c;
    printf("The circumference of the triangle is: %.2f\n", circumference);

    return 0;
}