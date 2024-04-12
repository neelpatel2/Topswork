/*/. Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary. /*/
#include <stdio.h>

int main() {
    float monthly_salary, insurance, loan, remaining_salary;

    printf("Enter your monthly salary: ");
    scanf("%f", &monthly_salary);

    insurance = monthly_salary * 0.1;  
    loan = monthly_salary * 0.1;  

    remaining_salary = monthly_salary - insurance - loan;

    printf("Deductions:\n");
    printf(" - Insurance: %.2f rupees\n", insurance);
    printf(" - Loan Installment: %.2f rupees\n", loan);
    printf("Remaining Salary: %.2f rupees\n", remaining_salary);
}
