//.Accept 5 employees name and salary and count average and total salary 
#include <stdio.h>

int main() {
    char names[5][10];
    float salaries[5], total, average;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        total += salaries[i];
    }
     average = total/5;
    printf("\nEmployee Details:\n");
    for (i = 0; i < 5; i++) {
     printf("Name: %s\tSalary: %.2f\n", names[i], salaries[i]);
    }
    printf("Total Salary: %.2f\n", total);
    printf("Average Salary: %.2f\n", average);

    return 0;
}
