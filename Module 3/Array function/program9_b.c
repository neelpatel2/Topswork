//Write a program of structure for five employee that provides the following information -print and display 
//empno, empname, address and age
#include <stdio.h>
#include <string.h>

struct Employee {
  int empno;
  char empname[50];
  char address[100];
  int age;
};

int main() {
  struct Employee emp[5]; 
  for (int i = 0; i < 5; i++) {
    printf("\nEnter details for employee %d:\n", i + 1);
    printf("Employee Number: ");
    scanf("%d", &emp[i].empno);

    printf("Employee Name: ");
    scanf(" %[^\n]", emp[i].empname); 

    printf("Employee Address: ");
    scanf(" %[^\n]", emp[i].address); 
    printf("Employee Age: ");
    scanf("%d", &emp[i].age);
  }

  printf("\nEmployee Information:\n");

  for (int i = 0; i < 5; i++) {
    printf("\nEmployee %d:\n", i + 1);
    printf("Employee Number: %d\n", emp[i].empno);
    printf("Employee Name: %s\n", emp[i].empname);
    printf("Employee Address: %s\n", emp[i].address);
    printf("Employee Age: %d\n", emp[i].age);
  }

  return 0;
}
