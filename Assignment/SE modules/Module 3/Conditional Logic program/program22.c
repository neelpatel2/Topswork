/*/ Write a C program to input basic salary of an employee and calculate its 
Gross salary according to following: 
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95%\ /*/
#include <stdio.h>

int main() {
    float basic_salary, gross_salary, hra, da;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    // Calculate HRA and DA based on slabs
    if (basic_salary <= 10000) {
        hra = basic_salary * 0.20;
        da = basic_salary * 0.80;
    } else if (basic_salary <= 20000) {
        hra = basic_salary * 0.25;
        da = basic_salary * 0.90;
    } else {
        hra = basic_salary * 0.30;
        da = basic_salary * 0.95;
    }

    gross_salary = basic_salary + hra + da;

    printf("Gross Salary: Rs. %.2f\n", gross_salary);

    return 0;
}
