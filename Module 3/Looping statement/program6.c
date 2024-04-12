// WAP to print Fibonacci series up to given numbers 
#include <stdio.h>

int main() {
    int num, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    printf("%d, %d, ", t1, t2);

    for (int i = 3; i <= num; ++i) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");

    return 0;
}
