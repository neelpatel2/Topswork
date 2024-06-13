//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3) 
#include <stdio.h>

int main() {
    int num, power;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("%d ^ 1 = %d\n", num, num);  
    printf("%d ^ 2 = %d\n", num, num * num);  
    printf("%d ^ 3 = ", num);

    power = 1;
    for (int i = 0; i < 3; i++) {
        power *= num;
    }
    printf("%d\n", power);
}
