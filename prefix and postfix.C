// WAP on prefix and postfix
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, d;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b); 

    c = a++;
    d = ++a;
    printf("Prefix ++ c = %d, Postfix ++ d = %d\n", c, d);

    c = a--;
    d = --a;
    printf("Prefix -- c = %d, Postfix -- d = %d\n", c, d);

    getch();
    return 0;
}