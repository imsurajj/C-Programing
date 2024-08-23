// Program to ask user for empid, age and salary and display them

#include <stdio.h>
#include <conio.h>
int main()
{
    int empid, age, salary;

    printf("Enter employee id, age and salary: ");
    scanf("%d %d %d", &empid, &age, &salary);

    printf("Employee id is %d\n", empid);
    printf("Employee age is %d\n", age);
    printf("Employee salary is %d\n", salary);

    getch();
    return 0;
}
