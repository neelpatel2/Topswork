// Calculate person’s Annual salary 
#include <stdio.h>

int main() {
    float monthly_salary;

    printf("Enter the monthly salary: ");
    scanf("%f", &monthly_salary);

    float annual_salary = monthly_salary * 12;

    printf("Annual Salary: %.2f\n", annual_salary);

    return 0;
}
