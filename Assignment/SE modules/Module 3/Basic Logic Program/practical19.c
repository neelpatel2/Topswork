#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate : ");
    scanf("%f", &rate);
    printf("Enter time period: ");
    scanf("%f", &time);

    rate = rate / 100;

    compound_interest = principal * (pow((1 + rate), time)) - principal;

    printf("Compound interest = %.2f\n", compound_interest);

    return 0;
}
