// Accept marks from user and check pass or fail 
#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 35) {
        printf("You are Passed !\n", marks);
    } else {
        printf("You are failed !\n", marks);
    }
}
