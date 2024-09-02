// Program to find factorial of a number

#include <stdio.h>
int main()
{
    unsigned int c,n,fact=1;
    // clrscr();
    printf("Enter a number to calculate its factorial: ");
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
        fact=fact*c;
    }
    printf("Factorial of %d = %d",n,fact);
    return 0;
}