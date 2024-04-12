/*/Write a program of structure employee that provides the following 
a. information -print and display empno, empname, address and age/*/ 
#include <stdio.h>
#include <string.h> // For strcpy (optional)

struct Employee {
    int empno;
    char empname[50]; // Adjust size limit as needed
    char address[100]; // Adjust size limit as needed
    int age;
};

int printEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);
}

int main() {
    struct Employee emp1;

    printf("Enter employee details:\n");
    printf("Employee Number: ");
    scanf("%d", &emp1.empno);

    printf("Employee Name: ");
    scanf(" %[^\n]s", emp1.empname); 
    printf("Employee Address: ");
    scanf(" %[^\n]s", emp1.address); 
    printf("Employee Age: ");
    scanf("%d", &emp1.age);

    printf("\nEmployee Information:\n");
    printEmployee(emp1);

    return 0;
}
