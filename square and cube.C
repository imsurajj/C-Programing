// Program to display square and cube of a number 

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a*a;
    c = a*a*a;
    printf("Square of %d is %d\n", a, b);
    printf("Cube of %d is %d\n", a, c);

    getch();
    return 0;
}