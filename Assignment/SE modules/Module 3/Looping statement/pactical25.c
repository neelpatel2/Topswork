//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) 
#include <stdio.h>
int main() {
    int n, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    sum = n * (n + 1) * (2 * n + 1) / 6;

    printf("The sum of the series (1*1) + (2*2) + ... + (%d*%d) is %d\n", n, n, sum);
    }

