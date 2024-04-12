#include <stdio.h>

int main() {
    int n, firstTerm, currentTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        firstTerm = 1;
        currentTerm = 2;  

        printf("%d %d ", firstTerm, currentTerm);

        for (int i = 3; i <= n; i++) {
            currentTerm = firstTerm * 3 / 2;  
            printf("%d ", currentTerm);
            firstTerm = currentTerm;  
        }

        printf("\n");
    }

    return 0;
}
