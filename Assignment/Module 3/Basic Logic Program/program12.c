#include <stdio.h>

int main() {
    int students, totalApples;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    totalApples = students * 5;

    printf("Total apples required: %d\n", totalApples);

    return 0;
}
