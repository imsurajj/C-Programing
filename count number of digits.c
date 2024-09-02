// Program to Count Number of Digits of Given Numbers

#include <stdio.h>
#include <conio.h>
int main()
{

    int n,t,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    t=n;
    while (n!= 0)
    {
        n=n/10;
        count++;
    }
    printf("Number of digits in %d is %d",t,count);
    return 0;
}