// Convert kilometers into meters 
#include <stdio.h>

int main() {
    double kilometers, meters;

    printf("Enter the distance in kilometers: ");
    scanf("%lf", &kilometers);

    meters = kilometers * 1000;

    printf("%.2f kilometers =%.2f meters.\n", kilometers, meters);

    return 0;
}

