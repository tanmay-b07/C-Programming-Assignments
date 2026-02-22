#include <stdio.h>

struct Employee
{
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

void emp_init(struct Employee *e)
{
    printf("Enter First Name: ");
    scanf("%s", e->firstName);

    printf("Enter Last Name: ");
    scanf("%s", e->lastName);

    printf("Enter Monthly Salary: ");
    scanf("%lf", &e->monthlySalary);
}

void set_salary(struct Employee *e, double sal)
{
    if(sal > 0)
        e->monthlySalary = sal;
}

void emp_display(struct Employee *e)
{
    printf("\nName : %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary : %.2lf\n", e->monthlySalary);
    printf("Yearly Salary  : %.2lf\n", e->monthlySalary * 12);
}

int main()
{
    struct Employee e1, e2;

    printf("Enter details for Employee 1\n");
    emp_init(&e1);

    printf("\nEnter details for Employee 2\n");
    emp_init(&e2);

    printf("\n--- Before 10%% Raise ---\n");
    emp_display(&e1);
    emp_display(&e2);

    // 10% raise
    set_salary(&e1, e1.monthlySalary * 1.10);
    set_salary(&e2, e2.monthlySalary * 1.10);

    printf("\n--- After 10%% Raise ---\n");
    emp_display(&e1);
    emp_display(&e2);

    return 0;
}